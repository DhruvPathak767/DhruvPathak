#include<iostream>
#include<string.h>
using namespace std;
class A{
    public:
    
    int a,b;
    A()
    {

    }
A(int x,int y)
{
    a=x;
    b=y;
}
A(A&r)
{
    
    a=r.a;
    b=r.b;

cout<<a<<b<<endl;
}

};
class a{
    public:
    char *taku;
    a()
    {
        taku= new char [10];
        strcpy(taku,"heallo");

    }
    void show()
    {
        cout<<"the string is"<<taku<<endl;
    }
    ~a()
    {
        cout<<"destructor"<<endl;
    }
};
int main()
{
    // program3
    // A r(2,3),e(1,3);
    // A f(e);

    // program 4
a op;
op.show();
   
    return 0;

}