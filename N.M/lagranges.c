#include<stdio.h>
#include<conio.h>
void main()
{
    float x[10],y[10],X,term=1,sum=0;
    int i,j,n;
    printf("enter the terms\n");
    scanf("%d",&n);
    printf("enter the  x terms\n");
    for ( i = 0; i < n; i++)
    {
        /* code */
        scanf("%f",&x[i]);
    }
    printf("enter the  y terms\n");
    for ( i = 0; i < n; i++)
    {
        /* code */
        scanf("%f",&y[i]);
    }
    printf("enter the interpolated value\n");
    scanf("%f",&X);
    for ( i = 0; i < n; i++)
    {
        /* code */term=1;
        for ( j = 0; j < n; j++)
        {
            /* code */
            if(i!=j)
            {
                term=term*((X-x[j])/(x[i]-x[j]));
            }
        }
        sum=sum+(term*y[i]);
        
    }
    printf("the value is%f",sum);

    getch();
    

}