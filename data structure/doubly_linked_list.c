#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    struct node*prev;
};

void traverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node*insertend(struct node*head,int d)
{
    struct node*temp=head;
    while (temp->next!=NULL)
    {
        /* code */
        temp=temp->next;

    }
    struct node*q=(struct node *)malloc(sizeof(struct node));
    temp->next=q;
    q->data=d;
    q->next=NULL;
    q->prev=temp;
    return head;
}
struct node*deleteend(struct node*head)
{
    struct node*temp=head;
    while (temp->next->next!=NULL)
    {
        /* code */
        temp=temp->next;

    }
    struct node*q=temp->next;
    temp->next=NULL;
    q->prev=NULL;
    free(q);
    return head;
}
void main()
{
     struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    head->data = 1;
    head->next = first;
    head->prev=NULL;
    first->data = 2;
    first->next = second;
    first->prev=head;

    second->data = 3;
    second->next = third;
    second->prev=first;

    third->data = 4;
    third->next = NULL;
    third->prev=second;
    head=insertend(head,10);
    head=deleteend(head);
    traverse(head);
}