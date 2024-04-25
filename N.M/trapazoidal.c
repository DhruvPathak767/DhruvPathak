#include<stdio.h>
int main()
{
    int i,n;
    float h,sum=0,x[10],y[10],val;
    printf("enter the value of intervals\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("x[%d]",i);
        scanf("%f",&x[i]);
        printf("y[%d]",i);
        scanf("%f",&y[i]);
    }
    for(int i=1;i<n;i++)
    {
        sum=sum+y[i];

    }
    h=x[1]-x[0];
    val=(h/2)*((y[0]+y[n])+2*sum);
    printf("the interpolated value is%f",val);
    
}