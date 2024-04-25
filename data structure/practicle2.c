#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main()
{

    // problem 1


    // int *ptr;
    // float sum=0,avg;
    // int n;
    // printf("enter the value of n\n");
    // scanf("%d",&n);
    // ptr=(int*)malloc(n*sizeof(int));
    // if(ptr=='\0')
    // {
    //     printf("there are no space available in this computer \n please try on another computer");

    // }
    // else{
    //     for(int i=0;i<n;i++)
    //     {
    //         scanf("%d",ptr+i);
    //     }
    //     for(int i=0;i<n;i++)
    //     {
    //         sum+=(*(ptr+i));
    //     }
    //     printf("sum=%f\n",sum);
    //     avg=sum/n;
    //     printf("average=%f\n",avg);
    // }

// problem 2

int *ptr;
char*msg;
msg=(char*)calloc(5,sizeof(char));
strcpy(msg,"hello");
printf("%s",msg);
msg=(char*)realloc(msg,20);
strcpy(msg,"hello,hoe are you");
printf("\n%s",msg);
free(msg);
    getch();
}