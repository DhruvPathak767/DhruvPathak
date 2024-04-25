#include<stdio.h>
int main()
{
    int n;
    float h,sum1=0,sum2=0,sum=0,x[10],y[10],val;
    printf("enter the value of intervals\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        printf("x[%d]",i);
        scanf("%f",&x[i]);
        printf("y[%d]",i);
        scanf("%f",&y[i]);
    }
    h=x[1]-x[0];
    for(int i=1;i<n;i++)
    {
        if(i%3==0)
        {
            sum1=sum1+2*y[i];
        }
        else{
            sum2=sum2+3*y[i];
        }

    }
    val=((3*h)/8)*((y[0]+y[n])+sum1+sum2);
    printf("the interpolated value is%f",val);
    
}