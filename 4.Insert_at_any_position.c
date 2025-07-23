// insert a node at any given position through linkedlist
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void add_at_pos(struct node *head, int data, int pos)
{
    struct node *ptr = head;
    struct node *ptr2 = malloc(sizeof(struct node));
    ptr2->data = data;
    ptr2->link = NULL;
    pos--;
    while (pos != 1)
    {
        ptr = ptr->link;
        pos--;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 1;
    head->link = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 2;
    ptr->link = NULL;
    head->link = ptr;

    ptr = malloc(sizeof(struct node));
    ptr->data = 3;
    ptr->link = NULL;
    head->link->link = ptr;

    int data = 4, position = 3;
    add_at_pos(head, data, position);

    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
        printf("\n");
    }
    return 0;
}