#include<stdio.h>
int main()
{
   float a[100][100],x,u1,u,y;
   int i,j,n,fact;

    printf("enter the number of values\n");
    scanf("%d",&n);
    printf("enter the x values\n");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&a[i][0]);
    }
     printf("enter the x values\n");
    for(int j=0;j<n;j++)
    {
        scanf("%f",&a[j][1]);
    }
    printf("enter the value of x\n");
    scanf("%f",&x);
    // difference table
    for(j=2;j<n+1;j++)
      {
        for(i=0;i<n-j+1;i++)
        {
            a[i][j]=a[i+1][j-1]-a[i][j-1];

        }
      }  
    //   printing the difference table
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            printf("%f",a[i][j]);
            
     
        }
        printf("\n");
            
    }
        
    y=a[0][1];
    u=((x-a[0][0])/(a[1][0]-a[0][0]));
    u1=u;
    fact=1;
    for(i=2;i<=n;i++)
    {
        y=y+((u1*(a[0][i]))/fact);
        fact=fact*i;
        u1=u1*(u-(i-1));
    }
    printf("the value is x=%g is=%f",x,y);
    getch();
   
}