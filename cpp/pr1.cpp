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
int main()
{
    
}
