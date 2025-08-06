// creation of a node in linkedlist
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->next = NULL;

    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = 07;
    new_node->next = NULL;
    head->next = new_node;

    struct node *last_node = malloc(sizeof(struct node));
    last_node->data = 18;
    last_node->next = NULL;
    head->next->next = last_node;

    // print the node
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}