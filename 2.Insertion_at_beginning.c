// insertion of node at beiginning of linkedlist
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
    head->data = 22;
    head->link = NULL;

    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = 33;
    new_node->link = NULL;
    head->link = new_node;

    struct node *last_node = (struct node *)malloc(sizeof(struct node));
    last_node->data = 44;
    last_node->link = NULL;
    head->link->link = last_node;

    struct node *at_beginning = (struct node *)malloc(sizeof(struct node));
    at_beginning->data = 11;
    at_beginning->link = head;
    head = at_beginning;

    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}