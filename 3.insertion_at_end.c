// insertion of node at the ending of linkedlist
#include <stdlib.h>
#include <stdio.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 1;
    head->link = NULL;

    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = 2;
    new_node->link = NULL;
    head->link = new_node;
//at_end node
    struct node *at_end = (struct node *)malloc(sizeof(struct node));
    at_end->data = 3;
    at_end->link = NULL;
//traverse to the last node
    struct node *ptr = head;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link=at_end;
//print the node
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}