#include<stdio.h>
void main()
{
    int a[5]={3,2,-1,1,0},t,min;
    for(int i=0;i<5;i++)
    {
        min=i;
        for(int j=i+1;j<5;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
        t=a[i];
        a[i]=a[min];
        a[min]=t;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
}