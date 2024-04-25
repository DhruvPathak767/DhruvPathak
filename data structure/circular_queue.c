#include<stdio.h>
#define max 10
int q[max],rear=-1,front=-1;
void enqueue()
{
    if((rear+1)%max==front)
    {
        printf("overflow\n");
        return;
    }
    if(rear==-1)
    {
        front=rear=0;

    }
   
    else{
        rear=(rear+1)%max;
    }
    int item;
    printf("enter the item\n");
    scanf("%d",&item);
    q[rear]=item;
}
void dequeue()
{
    int item;
    
    if(front==-1)
    {
        printf("underflow\n");
        return;
    }
    item=q[front];
    if(front==rear)
    {
        front=rear=-1;
    }
   
    
    else{
        front=(front=1)%max;
    }
    printf("the item was deleted\n");
}
void display()
{int i;
    if(front==-1)
    {
        printf("queue is empty\n");
        return;
    }
    for( i=front;i!=rear;i=(i+1)%max)
    {
        printf("%d\n",q[i]);
    }
    printf("%d\n",q[i]);
}
void main()
{
    int ch,y=1;
    while(y)
    {
    printf("enter your choice\n 1.enqueue\n2.dequeue\n3.traverse");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        /* code */
        enqueue();
        break;
        case 2:
        dequeue();
        break;;
        case 3:
        display();
        break;
    
    default:
    printf("invalid o/p\n");
        break;
    }
    printf("do you want to continue\n 1.yes\n 0.no\n");
    scanf("%d",&y);
    }
}