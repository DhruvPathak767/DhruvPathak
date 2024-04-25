#include<stdio.h>
#define max 30
void main()
{
    int i,j,n,bt[max],at[max],tat[max],temp[max],wt[max],wat,tata;
    printf("enter the number of process\n");
    scanf("%d",&n);
    printf("enter the arrival time\n");
    for (int i = 0; i < n; i++)
    {
        /* code */scanf("%d",&at[i]);
    }
    printf("enter the burst time\n");
    for (int i = 0; i < n; i++)
    {
        /* code */scanf("%d",&bt[i]);
    }
    printf("process id\tarrival time\ttat\twaiting time\t");
    for(i=0;i<n;i++)
    {
        wt[i]=0;
        tat[i]=0;
        temp[i+1]=temp[i]+bt[i];
       wt[i]=temp[i]-at[i];
       tat[i]=wt[i]-bt[i];
       printf("%d\t%d\t%d\t%d\n",i+1,at[i],tat[i],wt[i]);
    }
}