#include<iostream>
using namespace std;
class A{
    public:
int a,b;


A operator +(A o2)
{
    A obj;
    obj.a= a+o2.a;
    obj.b= b+o2.b;
    
    return obj;
}
void get()
{
    cin>>a>>b;
}
void display()
{
    cout<<"a="<<a<<"b="<<b<<endl;
}
friend A operator - (A &,A&);
};
A operator -(A&o1,A&o2)
{

    A obj;
    obj.a=o1.a - o2.a;
    obj.b=o1.b - o2.b;
    return obj;
}


int main()
{
    /*
    PROGRAM 1



    // A o1,o2,o3;
    // o1.get();
    // o2.get();
    // o3= o1 + o2;

    // o3.display();
    */

A o1,o2,o3;
    o1.get();
    o2.get();
    o3 = o1 - o2;

    cout<<o3.a<<o3.b;
    return 0;
}