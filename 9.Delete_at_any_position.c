#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

void del_at_pos(struct node **head_ref, int pos) {
    if (*head_ref == NULL) {
        printf("List is already empty.\n");
        return;
    }

    struct node *temp = *head_ref;

    if (pos == 1) {
        *head_ref = temp->link;
        free(temp);
        return;
    }

    struct node *prev = NULL;
    while (pos != 1 && temp != NULL) {
        prev = temp;
        temp = temp->link;
        pos--;
    }

    if (temp == NULL) {
        printf("Position out of range.\n");
        return;
    }

    prev->link = temp->link;
    free(temp);
}

int main(){
    struct node *head = (struct node*) malloc (sizeof(struct node));
    head -> data = 10;
    head -> link = NULL;
    struct node *second = (struct node*) malloc (sizeof(struct node));
    second -> data = 20;
    second -> link = NULL;
    head ->link = second;
    struct node *third = (struct node*) malloc (sizeof(struct node));
    third -> data = 30;
    third -> link = NULL;
    second -> link = third;
    struct node *last = (struct node*) malloc (sizeof(struct node));
    last -> data = 40;
    last -> link = NULL;
    third -> link = last;   

    int position = 2;
    del_at_pos(&head, position);

    struct node *ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->link;
        }
        return 0;

}