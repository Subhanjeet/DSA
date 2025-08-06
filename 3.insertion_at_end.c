// insertion of node at the ending of linkedlist
#include <stdlib.h>
#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 1;
    head->next = NULL;

    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = 2;
    new_node->next = NULL;
    head->next = new_node;

    // at_end node

    struct node *at_end = (struct node *)malloc(sizeof(struct node));
    at_end->data = 3;
    at_end->next = NULL;

    // traverse to the last node

    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = at_end;

    // print the node

    ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}