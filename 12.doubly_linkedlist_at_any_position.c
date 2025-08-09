#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

void add_at_pos(struct node *head, int data, int pos) {
    struct node *ptr = head;
    struct node *ptr2 = malloc(sizeof(struct node));
    ptr2->data = data;
    ptr2->prev = NULL;
    ptr2->next = NULL;
    pos--;

    while (pos != 1) {
        ptr = ptr->next;
        pos--;
    }

    ptr2->next = ptr->next;
    if (ptr->next != NULL) {
        ptr->next->prev = ptr2;
    }
    ptr->next = ptr2;
    ptr2->prev = ptr;
}

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->prev = NULL;
    head->next = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 18;
    ptr->prev = head;
    ptr->next = NULL;
    head->next = ptr;

    ptr = malloc(sizeof(struct node));
    ptr->data = 7;
    ptr->prev = head->next;
    ptr->next = NULL;
    head->next->next = ptr;

    int data = 67, position = 3;
    add_at_pos(head, data, position);

    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");

    return 0;
}