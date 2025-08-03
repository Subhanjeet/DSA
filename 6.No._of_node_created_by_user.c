#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *create(int n)
{
    struct node *head = NULL, *temp = NULL, *newNode = NULL;
    int i, value;

    for (i = 1; i <= n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        if (newNode == NULL)
        {
            printf("Memory allocation failed\n");
            exit(1);
        }
        printf("Enter data for node %d: ", i);
        scanf("%d", &value);
        newNode->data = value;
        newNode->link = NULL;

        if (head == NULL)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->link = newNode;
            temp = temp->link;
        }
    }
    return head;
}

void display(struct node *head)
{
    struct node *temp = head;
    printf("Linked list: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main()
{
    int n;
    struct node *head = NULL;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    head = create(n);
    display(head);
    return 0;
}