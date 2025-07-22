// insertion of a node in linkedlist
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = 07;
    new_node->link = NULL;
    head->link = new_node;

    struct node *last_node = malloc(sizeof(struct node));
    last_node->data = 18;
    last_node->link = NULL;
    head->link->link = last_node;

    // print the node
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}