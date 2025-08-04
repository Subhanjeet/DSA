#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

void del_at_end(struct node *head) {
    if (head == NULL) {
        printf("List is already empty.\n");
        return;
    }
    if (head->link == NULL) {
        free(head);
        head = NULL;
        return;
    }
    struct node *ptr = head;
    struct node *prev = NULL;
    while (ptr->link != NULL) {
        prev = ptr;
        ptr = ptr->link;
    }
    prev->link = NULL;
    free(ptr);
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 11;
    head->link = NULL;

    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 22;
    temp->link = NULL;
    head->link = temp;

    struct node *temp2 = (struct node *)malloc(sizeof(struct node));
    temp2->data = 33;
    temp2->link = NULL;
    temp->link = temp2;

    struct node *temp3 = (struct node *)malloc(sizeof(struct node));
    temp3->data = 44;
    temp3->link = NULL;
    temp2 -> link = temp3;

    del_at_end(head);

    struct node *print = head;
    while (print != NULL)
    {
        printf("%d\n", print->data);
        print = print->link;
    }
}