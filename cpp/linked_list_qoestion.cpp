#include<iostream>
using namespace std;
class node{
    public:
    node* next;
    int data;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
        
    }
    ~node()
    {
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"item deleted with this data"<<value<<endl;
    }
    
};void inserthead(node* &head,int g)
    {
        node*temp=new node(g);
        temp->next=head;
        head=temp;
    }
     void inserttail(node*&tail,int data)
    {
        node*temp=new node(data);
        tail->next=temp;
        tail=tail->next;
    }
    void insertposition(node*&head,node*&tail,int d,int pos)
    {
        if(pos==1)
        {
            inserthead(head,d);
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
            inserttail(tail,d);
            return;
        }
        node* middle=new node(d);
        middle->next=temp->next;
        temp->next=middle;

    }
    void printh(node* &head)
    {
        node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        cout<<endl;
    }
    void reverse(node*&head,node*curr,node*prev)
    
    {
        if(head==NULL)
        
        {
            head=prev;
            return;
        }
        node*forward=curr->next;
        reverse(head,forward,curr);
        curr->next=prev;
    }
    // node reverse(node*head,int k)
    // {
    //     node*prev=NULL;
    //     node*curr=head;
    //     node*next=NULL;
    //     int count=0;
    //     while (curr!=NULL && count<k)
    //     {
    //         if(head==NULL)
    //         {
    //             return NULL;
    //         }
            
    //         /* code */
    //         next=curr->next;
    //         curr->next=curr;
    //         curr=prev;
    //         count++;
    //         if(next!=NULL)
    //         {
    //             head->next =reverse(head,k);
    //         }
    //         return prev;

    //     }
        
    // }
    int main()
{
    node * node1=new node(10);
    node *head=node1;
    
    node*tail=node1;
    inserthead(head,11);
    inserthead(head,13);
    inserthead(head,14);
    inserthead(head,15);
    
    printh(head);
    cout<<"helo world"<<endl;
    // printh(head);
//    question 1 REVERSE A STRING

// if( head==NULL || head->next==NULL)
// {
//  printh(head);   
// }
// node*prev=NULL;
// node*curr=head;
// node*forward=NULL;
// while(curr!=NULL)
// {
//     forward=curr->next;
//     curr->next=prev;
//     prev=curr;
//     curr=forward;
// }
// printh(prev);


// QUESTION 1 APPROACH 2
// node * curr=head;
// node*prev=NULL;
// reverse(head,curr,prev);
// printh(head);
   
//    QUESTION 2 : MIDLLE ELEMENT OF THE LINKED LIST
// int length=0;
// node*temp=head;
// while(temp!=NULL)
// {
//     length++;
//     temp=temp->next;
// }
// cout<<length<<endl;
// int mid=(length/2),ans,cnt=0;
// node*t=head;
// while (cnt<mid)
// {
//     /* code */
//     cnt++;
//     t=t->next;
// }
// cout<<"mid="<<t->data<<endl;


// QUESTION 2 APPROACH 2
// node*fast=head->next;
// node*slow=head;
// while (fast!=NULL)
// {
//     /* code */
//     fast=fast->next;
//     if(fast!=NULL)
//     {
//         fast=fast->next;
//     }
//     slow=slow->next;
// }
// cout<<"mid="<<slow->data<<endl;





// QUESTION 3 : PREVERSE A LINKED LIST AT no of k groups
// int k;
// cout<<"enter the value of k"<<endl;
// cin>>k;
    return 0;
    

}