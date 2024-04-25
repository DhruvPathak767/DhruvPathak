#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *insert(struct node *head, int d)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = d;
    temp->next = head;
    head = temp;
    return head;
}
struct node *bet(struct node *head, int d, int pos)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int count = 0;
    while (count != pos - 1)
    {
        p = p->next;
        count++;
    }
    temp->data = d;
    temp->next = p->next;
    p->next = temp;
    return head;
}
struct node *end(struct node *head, int d)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }

    temp->data = d;

    temp->next = NULL;
    p->next = temp;

    return head;
}
struct node *afternode(struct node *head, struct node *prev, int d)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = d;
    temp->next = prev->next;
    prev->next = temp;
    return head;
}
struct node *delet(struct node* head)
{
    struct node*temp=(struct node*)malloc (sizeof(struct node));
    temp=head;
    head=head->next;
    free(temp);
    return head;
}
struct node *deletbet(struct node* head,int pos)
{
    struct node*temp=head;
    int count=0;
    while(count!=(pos-2))
    {
        temp=temp->next;
count++;
    }
    struct node*q=temp->next;
    temp->next=q->next;
    free(q);
    return head;
}
struct node *deletend(struct node* head)
{
    struct node*temp=head;
    int count=0;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;

    }
    struct node*q=temp->next;
    temp->next=NULL;
    free(q);
    return head;
}
struct node *deletafternode(struct node* head,struct node*t)
{
    struct node*temp=t;
    struct node*q=temp->next;
    temp->next=q->next;
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
    first->data = 2;
    first->next = second;

    second->data = 3;
    second->next = third;

    third->data = 4;
    third->next = NULL;
    // head = insert(head, 2);

    // // printf("enter the index and data that you want to insert\n");
    // // scanf("%d %d",&ind,&data);
    // // head=bet(head,data,ind);
    // head = end(head, 4);
    // head=afternode(head,first,11);
    // head=delet(head);
    //  head=deletbet(head,3);
    //  head=deletend(head);
     head=deletafternode(head,first);
     

    traverse(head);
}