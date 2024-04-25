#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main()
{
    // WRITE A C PROGRAM TO FIND SUM AND AVG USING MALLOC FUNCTION

    int *ptr,n,sum=0;
    float avg;
    printf("enter the limit");
    scanf("%d",&n);
    ptr=(int *) malloc(n*sizeof(int));
    if(ptr=='\0')
    {
        printf("memory is full");
    } 
    else{
        printf("enter the elements");
        for(int i=0;i<n;i++)
        {
            scanf("%d",ptr+i);
        }
        for(int i=0;i<n;i++)
        {
            sum=sum+(*(ptr+i));
        }
        printf("sum is%d\n",sum);
        avg=sum/n;
        printf("average is%f\n",avg);

    }
    getch();
}