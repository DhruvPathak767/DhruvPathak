#include<stdio.h>
void main()
{
    int a[5]={3,2,-1,1,0},t,min;
    for(int i=0;i<5;i++)
    {
        min=i;
        for(int j=0;j<5-i;j++)
        {
            if(a[j+1]<a[j])
            {
                 t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
            }
        }
       
    }
    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
}