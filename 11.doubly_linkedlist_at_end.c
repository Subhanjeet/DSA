//insertion of node at the end of doubly linked list
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

void add_at_end(struct node *head, int data) {
    struct node *ptr, *temp;
    ptr = head;
    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;

    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->prev = ptr;
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

    add_at_end(head, 67);

    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");

    return 0;
}