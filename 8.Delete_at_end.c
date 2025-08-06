#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void del_at_end(struct node *head)
{
    if (head == NULL)
    {
        printf("List is already empty.\n");
        return;
    }
    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        return;
    }
    struct node *ptr = head;
    struct node *prev = NULL;
    while (ptr->next != NULL)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = NULL;
    free(ptr);
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 11;
    head->next = NULL;

    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 22;
    temp->next = NULL;
    head->next = temp;

    struct node *temp2 = (struct node *)malloc(sizeof(struct node));
    temp2->data = 33;
    temp2->next = NULL;
    temp->next = temp2;

    struct node *temp3 = (struct node *)malloc(sizeof(struct node));
    temp3->data = 44;
    temp3->next = NULL;
    temp2->next = temp3;

    del_at_end(head);

    struct node *print = head;
    while (print != NULL)
    {
        printf("%d\n", print->data);
        print = print->next;
    }
}