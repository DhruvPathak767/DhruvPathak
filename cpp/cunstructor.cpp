#include<iostream>
#include<string.h>
using namespace std;
class a{
    private:
    int health;
    
    
    public:
    char*name;
    static int num;
    a()
    {
        cout<<"default constructor"<<endl;
        name=new char[100];
    }
    a(int health)
    {
        this->health=health;
        cout<<health;
    }
    // a(a &temp)
    // {
        
    // }
   a(a &temp)
   {
    char *ch=new char[strlen(temp.name)+1];
    strcpy(temp.name,ch);
    this->name=ch;
   }
    void print()
    {
        cout<<"health is"<<this->health<<"     ";
        cout<<"name is"<<this->name<<"     ";

    }
    void set(char name[])
    {
        this->name=name;
    }
void he(int health)
    {
        this->health=health;
    }
static int taku()
{
    return num+10;
}

};
int a::num=10;
int main()
{
    
    // a A(10);
    // a B(A);
//     char name[10]="dhruv";
//     a A;
//     A.set(name);
//     A.he(12);

//     A.print();
//    A.name[0]='g';
//     a B(A);
//     A.print();
//     B.print();
cout<<"static operator is"<<a::num<<endl;
cout<<"the two num is"<<a::taku()<<endl;

    return 0;

}