#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void del_at_pos(struct node **head_ref, int pos)
{
    if (*head_ref == NULL)
    {
        printf("List is already empty.\n");
        return;
    }

    struct node *temp = *head_ref;

    if (pos == 1)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    struct node *prev = NULL;
    while (pos != 1 && temp != NULL)
    {
        prev = temp;
        temp = temp->next;
        pos--;
    }

    if (temp == NULL)
    {
        printf("Position out of range.\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next = NULL;
    struct node *second = (struct node *)malloc(sizeof(struct node));
    second->data = 20;
    second->next = NULL;
    head->next = second;
    struct node *third = (struct node *)malloc(sizeof(struct node));
    third->data = 30;
    third->next = NULL;
    second->next = third;
    struct node *last = (struct node *)malloc(sizeof(struct node));
    last->data = 40;
    last->next = NULL;
    third->next = last;

    int position = 2;
    del_at_pos(&head, position);

    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}