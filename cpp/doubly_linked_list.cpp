#include<iostream>
using namespace std;
class node{
   
    public:
     int data;
    node*prev;
    node*next;
    node(int data)
    {
        this->next=NULL;
        this->prev=NULL;
        this->data=data;
    }
    
};
void print(node*&head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertathead(node *&head,int data)
{
    node*temp=new node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertattail(node*&tail,int data)
{
    node*temp=new node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void insertatposition(node*&head,node*&tail,int pos,int data)
{
if(pos==1)
        {
            insertathead(head,data);
            return;
        }
       
        node*temp=head;
        int count=1;
        
        while(count<pos-1)
        {
            temp=temp->next;
            count++;
        }
         if(temp->next==NULL)
        {
            insertattail(tail,data);
            return;
        }
       node*nodetoinsert=new node(data);
        temp->next->prev=nodetoinsert;
        temp->next=nodetoinsert;
        nodetoinsert->prev=temp;
    }

int main()
{
    node* node1=new node(10);
    node* head=node1;
    node*tail=node1;
    
    insertathead(head,11);
    print(head);
     insertathead(head,12);
     print(head);
      insertathead(head,13);
      print(head);
      
      
       insertatposition(head,tail,2,1);
       print(head);
    return 0;
}