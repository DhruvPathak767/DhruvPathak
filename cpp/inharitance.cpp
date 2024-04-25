#include<iostream>
using namespace std;
// class human{
// public:
// int height;
// int weight;
// int getheight(int height)
// {
//     return this->height;
// }
// int getwidth(int height)
// {
//     return this->height;
// }
// };
// class student:public human{
//     public:
//     void print()
//     {
//         cout<<"height="<<height<<endl<<"weight="<<weight<<endl;
//     }
// };


// sigle level inharitance
// class A
// {
//     public:
//     void sa()
//     {
//         cout<<"class A"<<endl;
//     }
// };
// class B{
//     public:
//     void sa()
//     {
//         cout<<"class B"<<endl;
//     }
// };
// // multi level inharitance
// class C:public A,public  B{
//     public:
//     void sc()
//     {
//         cout<<"class C"<<endl;
//     }
// };
// // multiple inharitance
// class D:public C,public B{
//     public:
//     void sd()
//     {
//         cout<<"class D"<<endl;
//     }
// };

// operator overloading
class A{
    public:
    int a,b;
void operator+ (A &ob)
{
    int v1=this->a;
    int v2=ob.a;
    cout<<"op"<<v1-v2<<endl;

}
};
int main()
{
    // student o;
    // o.getheight(100);
    // o.getwidth(40);
    // o.print();
    // B o;
    // o.sa();
    // o.sb();
    // C ob;
    // ob.sa();
    // ob.sb();
//     // ob.sc();
//     D d;
    
//      d.sc();
//  d.sd();
 
A ob;
A ob1;
ob.a=10;
ob1.a=12;
ob+ob1;


    return 0;
}