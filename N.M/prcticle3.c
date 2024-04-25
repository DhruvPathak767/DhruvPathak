#include<stdio.h>
#include<math.h>

#define F(x) x*x*x-4*x-9

void main()
{
    float a,b,c,f;
    int i=0;
    printf("enter the initial roots\n");
    scanf("%f %f",&a,&b);
     do{
        c=(a+b)/2;
        f=F(c);
        printf("i=%d  a=%f  b=%f  c=%f  F(c)=%f",i,a,b,c,f);
        if(F(a)*F(c)>0)
        {
            b=c;
        }
        else{
            a=c;
        }
        i++;
     
     }
     while(fabs(F(c))>0.001);

     printf("\n\n\n approximate root =%4.f\n\n",c);
     
}