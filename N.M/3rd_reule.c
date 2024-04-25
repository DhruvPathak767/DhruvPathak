#include<stdio.h>
int main()
{
    int n;
    float h,sum1=0,sum2=0,x[10],y[10],val;
    printf("enter the value of intervals\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        printf("x[%d]",i);
        scanf("%f",&x[i]);
        printf("y[%d]",i);
        scanf("%f",&y[i]);
    }
    int i=1;
   while (i<=n-1)
   {

    /* code */
    sum1=sum1+y[i];
    i+=2;
   }
   int j=2;
   while (j<=n-2)
   {
    /* code */
    sum2=sum2+y[j];
    j+=2;
   }
    h=x[1]-x[0];
    val=(h/3)*((y[0]+y[n])+(4*sum1)+(2*sum2));
    printf("the interpolated value is%f",val);
    
}