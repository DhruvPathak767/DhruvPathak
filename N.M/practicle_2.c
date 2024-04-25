#include<stdio.h>
#include<conio.h>
#include <math.h>
void main()
{


    /*


    PROBLEM 1


    // int n;
    // float x[10],y[10],h,k=0,sum=0,st=0;
    // printf("enter the value of intervals");
    // scanf("%d",&n);
    // for(int i=0;i<=n;i++)
    // {
    //     printf("enter x[%d]\n",i);
    //     scanf("%f",&x[i]);
    //     printf("enter y[%d]\n",i);
    //     scanf("%f",&y[i]);
    // }
    // h=x[1]-x[0];
    // for(int i=0;i<n;i++)
    // {
    //     if(k==0)
    //     {
    //         st=y[i]+y[n];
    //         k+=1;
    //     }
    //     else{
    //         sum=sum+y[i];
    //     }
    // }
    // sum=sum*2;
    // sum=sum+st;
    // sum=(h/2)*sum;

    // printf("answer is%f",sum);


    END OF PROBLEM 1
    */
/*
   PROBLEM 2,3 :


   int n;
   float x[10],y[10],sum3,sumo,sum,h;
   printf("enter the number intervals");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
    printf("enter x[%d]\n",i);
    scanf("%f",&x[i]);
    printf("enter y[%d]\n",i);
    scanf("%f",&y[i]);
   }
   h=x[1]-x[0];


   for(int i=1;i<n;i++)
   {
    if(i%3==0)                              problem 2
                                               if(i%2==0)
                                               {
                                                sume=sume+y[i];
                                               } 
                                               else{
                                                sumo=sumo+y[i];
                                               }
    {                                       
        sum3=sum3+2*y[i];
    }
    else{
        sumo=sumo+3*y[i];
    }
   }
  sumo=sumo+sum3;
  sumo=sumo+(y[0]+y[n-1]);
  sum=(3*(h/8))*sumo;                           sum=(h/3)*((y[0]-y[i-1])+4*sumo+2*sume);
   printf("sum=%f",sum);

   

   
*/

    getch();
}