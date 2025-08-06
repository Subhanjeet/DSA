// insertion of node at beiginning of linkedlist
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
    head->data = 22;
    head->next = NULL;

    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = 33;
    new_node->next = NULL;
    head->next = new_node;

    struct node *last_node = (struct node *)malloc(sizeof(struct node));
    last_node->data = 44;
    last_node->next = NULL;
    head->next->next = last_node;

    struct node *at_beginning = (struct node *)malloc(sizeof(struct node));
    at_beginning->data = 11;
    at_beginning->next = head;
    head = at_beginning;

    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}