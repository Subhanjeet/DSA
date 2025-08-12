//deletion of node at end in doubly linked list
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

void del_at_end(struct node *head) {
    if (head == NULL) {
        printf("List is already empty.\n");
        return;
    }
    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }
    struct node *ptr = head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->prev->next = NULL;
    free(ptr);
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

    del_at_end(head);

    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");

    return 0;
}