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
    
};
void insert(node *&tail,int elemnt,int data)
{
    if(tail==NULL)
    {
        node* newnode=new node(data);
        tail=newnode;
        newnode->next=newnode;

    }
    else{
        node* curr=tail;
        while (curr->data!=elemnt)
        {
            /* code */
            curr=curr->next;
        }
        node*temp=new node(data);
        temp->next=curr->next;
        curr->next=temp;

        
    }
}
void print(node*tail)
{
      if(tail==NULL)
    {
        cout<<"list is empty "<<endl;
        return;
    }

    node*temp=tail;
    do
    {
        /* code */
        cout<<tail->data<<" ";
        tail=tail->next;
    } while (tail!=temp);
    
}
void delet(node* tail,int vslue)
{
    if(tail==NULL)
    {
        cout<<"list is empty element can'nt be deleted"<<endl;
        return;
    }
    else{
        node*prev=tail;
        node *curr=prev->next;
        while (curr->data!=vslue)
        {
            /* code */
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        if(curr==prev)
        {
            tail=NULL;
        }
         if(tail==curr)
        {
            tail=prev;
        }
        curr->next;
        delete curr;
        
    }
}
node*floyed(node*head)
{
    if(head==NULL)
    {
        return NULL;
    }
    node*slow=head;
    node*fast=head;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
        if(fast==slow)
        {
            return fast;
        }
        
    }
    return NULL;
   
}
node*first(node*head)
{
    if (head==NULL)
    {
        /* code */
        return NULL;
    }
    node*intersection=floyed(head);
    node*temp=head;
    while(temp!=intersection)
    {
        temp=temp->next;
        intersection=intersection->next;
    }
return temp;
    
}
void remove(node*tail)
{
    if (tail==NULL)
    {
        /* code */
        return;
    }
    node*star=first(tail);
    node*temp=star;
    while (temp->next!=star)
    {
        /* code */
        temp=temp->next;
    }
    temp->next=NULL;
    
    
}
int main()
{
    node*tail=NULL;
    insert(tail,5,12);
     insert(tail,12,13);
     insert(tail,12,16);
    //  delet(tail,12);
      
    print(tail);
    cout<<"hello world"<<endl;
    
    if(floyed(tail)==NULL)
    {
        cout<<"cycle is not prsent"<<endl;
    }
    else 
    {
        cout<<"cycle is present"<<endl;
    }
    node*ans=first(tail);
    cout<<"first node of cycle is "<<ans->data<<endl;
    remove(tail);
    cout<<"cycle reove successfully"<<endl;
     if(floyed(tail)==NULL)
    {
        cout<<"cycle is not prsent"<<endl;
    }
    else 
    {
        cout<<"cycle is present"<<endl;
    }

    
    
    return 0;
}