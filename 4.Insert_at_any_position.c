//linsertion of node at any postion in linkedlist
#include<Stdio.h>
#include<stdlib.h>
struct node{
    int data;      
    struct node *link;
};
int main(){
    struct node *head = malloc(sizeof(struct node));
    head ->data=111;
    head-> link=NULL;

    struct node *new_node= malloc(sizeof(struct node));
    new_node->data=222;
    new_node->link=NULL;
    head->link=new_node;

    struct node *middle_node = malloc(sizeof(struct node));
    middle_node->data=333;
    middle_node->link = NULL;
    head->link->link=middle_node;

    struct node *last_node= malloc(sizeof(struct node));
    last_node->data=444; 
    last_node->link = NULL;
    head->link->link->link = last_node;

    //main code likhna baki hai.....

    struct node *print =head;
    while(print != NULL){
        printf("%d\n",print->data);
        print=print->link;
    }
}