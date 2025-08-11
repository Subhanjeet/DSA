//deletion of node at beginning
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *del_beg(struct node *head)
{
    if (head == NULL)
    {
        printf("List is already empty.\n");
        return NULL;
    }
    struct node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->next = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 18;
    ptr->next = NULL;
    head->next = ptr;

    head = del_beg(head);

    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");

    return 0;
}