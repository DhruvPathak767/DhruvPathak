#include<stdio.h>
#include<math.h>
void main()
{
    int n;
    float x[100][100],u1=1,y,a;
  
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
            x[i][j]=(x[i+1][j-1]-x[i][j-1])/(x[i+j-1]-x[j-2]);
        }
    }
    printf("the following is the difference table\n");
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j <=n-i; j++)
        {
            /* code */
            printf("%f",x[i][j]);
        }
        printf("\n");
        
    }
   
    int j=0;
    

    y=x[0][1];
    for(int i=2;i<=n;i++)
    {
        u1=u1*(a-x[j][0]);
        y=y+(u1*x[0][i]);
        
        
        j++;
        
    }
    printf("the final value corrusponding to a is%f",y);

}
