
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *del_beg(struct node *head) {
    if (head == NULL) {
        printf("List is already empty.\n");
        return NULL;
    }
    struct node *temp = head;
    head = head->link;
    free(temp);
    return head;
}

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 18;
    ptr->link = NULL;
    head->link = ptr;

    head = del_beg(head);

    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");

    return 0;
}