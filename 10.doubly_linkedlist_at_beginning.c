#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *add_beg(struct node *head, int d) {
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = d;
    ptr->prev = NULL;
    ptr->next = head;
    if (head != NULL) {
        head->prev = ptr;
    }
    head = ptr;
    return head;
}

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 22;
    head->prev = NULL;
    head->next = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 33;
    ptr->prev = head;
    ptr->next = NULL;
    head->next = ptr;

    int data = 11;
    head = add_beg(head, data);

    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");

    return 0;
}