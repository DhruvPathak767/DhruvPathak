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
int main()
{
    node*tail=NULL;
    insert(tail,5,12);
     insert(tail,12,13);
     insert(tail,12,16);
     delet(tail,12);
      
    print(tail);
    cout<<"hello world"<<endl;
    return 0;
}