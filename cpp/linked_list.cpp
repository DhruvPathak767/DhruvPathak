#include <iostream>
using namespace std;
class node
{
public:
    node *next;
    int data;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "item deleted with this data" << value << endl;
    }
};
void inserthead(node *&head, int g)
{
    node *temp = new node(g);
    temp->next = head;
    head = temp;
}
void printh(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}
void inserttail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    tail = tail->next;
}
void printt(node *&tail)
{
    node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}
void insertposition(node *&head, node *&tail, int d, int pos)
{
    if (pos == 1)
    {
        inserthead(head, d);
        return;
    }

    node *temp = head;
    int count = 1;

    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        inserttail(tail, d);
        return;
    }
    node *middle = new node(d);
    middle->next = temp->next;
    temp->next = middle;
}
void delet(node *&head, int pos)
{
    if (pos == 1)
    {
        node *temp = head;

        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        node *crr = head;
        node *prev = NULL;
        int cnt = 1;
        while (cnt < pos)
        {
            prev = crr;
            crr = crr->next;
            cnt++;
        }
        prev->next = crr->next;
        crr->next = NULL;
        delete crr;
    }
}
bool iscircular(node *head)
{
    if (head == NULL)
    {
        return true;
    }
    node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == head)
    {
        return true;
    }
    return false;
}
node *duplicate(node *head)
{
    if (head == NULL)
    {
        /* code */
        return NULL;
    }
    node *curr = head;
    while (curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            node *nex = curr->next->next;
            node *d = curr->next;
            // delete(d);
            curr->next = nex;
        }

        else
        {
            curr = curr->next;
        }
    }

    return head;
}
void sorted(node *head)
{
    node *temp = head;
    int zero = 0;
    int one = 0;
    int two = 0;
    while (temp != NULL)
    {
        /* code */
        if (temp->data == 0)
        {
            zero++;
        }
        else if (temp->data == 1)
        {
            one++;
        }
        else if (temp->data == 2)
        {
            two++;
        }
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        if (zero != 0)
        {
            temp->data = 0;
            zero--;
        }
        else if (one != 0)
        {
            temp->data = 1;
            one--;
        }
        else if (two != 0)
        {
            temp->data = 2;
            two--;
        }
        temp = temp->next;
    }
    node *print = head;
    while (print != NULL)
    {
        cout << print->data << " ";
        print = print->next;
    }
}
node *solve(node *first, node *second)
{
    node *curr1 = first;
    node *next1 = curr1->next;
    node *curr2 = second;
    node *next2 = curr2->next;
    if (next1 == NULL)
    {
        curr1->next = curr2;
        return first;
    }
    while (next1 != NULL && curr2 != NULL)
    {
        if ((curr2->data >= curr1->data) && (curr2->data <= next1->data))
        {
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            curr1 = next1;
            next1 = next1->next;
            if (next1 == NULL)
            {
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}
node *merge(node *head1, node *head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    if (head1->data < head2->data)
    {
        return solve(head1, head2);
    }
    else
    {
        return solve(head2, head1);
    }
}

int main()
{
    node *node1 = new node(4);
    node *head1 = node1;

    node *tail1 = node1;
    inserthead(head1, 3);
    inserthead(head1, 2);
    inserthead(head1, 1);
    inserthead(head1, 0);
    // printh(head1);
    // printh(head1);
    // insertposition(head,tail,2,6);
    // // printh(head);
    // delet(head,3);

    node *node2 = new node(6);
    node *head2 = node2;

    node *tail2 = node2;
    inserthead(head2, 5);
    inserthead(head2, 4);
    // printh(head2);
  node* temp=merge(head1,head2);
  printh(temp);
    // node* newhead=duplicate(head);
    // printh(newhead);
    //   if(iscircular(tail))
    //     {
    //         cout<<"the linked list is circular in nature"<<endl;
    //     }
    //     else{
    //         cout<<"the linked liist is not circular in nature"<<endl;
    //     }

    return 0;
}