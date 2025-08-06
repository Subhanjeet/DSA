#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int count_nodes(struct node *head)
{
    int count = 0;
    if (head == NULL)
    {
        return count;
    }
    struct node *ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 11;
    head->next = NULL;

    struct node *second = malloc(sizeof(struct node));
    second->data = 22;
    second->next = NULL;
    head->next = second;

    struct node *third = malloc(sizeof(struct node));
    third->data = 33;
    third->next = NULL;
    second->next = third;

    int count = count_nodes(head);
    printf("Number of nodes: %d\n", count);
    return 0;
}