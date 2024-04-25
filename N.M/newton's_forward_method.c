#include<stdio.h>
#include<math.h>
void main()
{
    int n,fact=1;
    float x[100][100],u1,u,h,y,a;
    int n,fact=1;
    printf("enter the number of values\n");
    scanf("%d",&n);
    printf("enter the x values\n");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&x[i][0]);
    }
    printf("enter the y values\n");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&x[i][1]);
    }
    printf("enter the value which is find");
    scanf("%f",&a);

    for(int j=2;j<n+1;j++)
    {
        for(int i=0;i<n-j+1;i++)
        {
            x[i][j]=x[i+1][j-1]-x[i][j-1];
        }
    }
    printf("the following is the difference table\n");
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j <n-i; j++)
        {
            /* code */
            printf("%f",x[i][j]);
        }
        printf("\n");
        
    }
    h=x[1][0]-x[0][0];
    u=(a-x[0][0])/h;
    u1=u;
    y=x[0][1];
    for(int i=2;i<=n;i++)
    {
        y=y+(u1*x[0][i])/fact;
        fact=fact*i;
        u1=u1*(u-(i-1));
    }
    printf("the final value corrusponding to a is%f",y);

}