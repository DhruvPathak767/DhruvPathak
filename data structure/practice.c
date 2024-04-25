#include <stdio.h>
#include <conio.h>
#include<string.h>
void scan(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void print(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {

        printf("%d \t", a[i]);
    }
}
int compare(char a[], char b[])
{
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0')

    {
        if (a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}
void main()
{
    //  ARRAY INSERTION AND DELETION
    //     int n,p1,p2,s;
    //     printf("enter the size of the array\n");
    //     scanf("%d",&s);
    //     int arr[100];
    //     printf("enter the elements in an array\n");
    //     scan(arr,s);
    //     printf("enter the position for insertion\n");
    //     scanf("%d",&p1);
    //     printf("enter the value for insertion\n");
    //     scanf("%d",&n);
    //     printf("enter the position for deletion\n");
    //     scanf("%d",&p2);

    //     printf("*********insertion*********\n");
    //     for(int i=s-1;i>=p1-1;i--)
    //     {
    //         arr[i+1]=arr[i];

    //     }
    //     arr[p1-1]=n;
    //     s++;
    //     print(arr,s);

    //      printf("\n*********deletion*********\n");
    //      int item;
    //      item=arr[p2-1];
    //  for(int i=p2-1;i<s-1;i++)
    //     {
    //         arr[i]=arr[i+1];

    //     }
    //     printf("deleted element is %d\n",item);
    // s--;
    // print(arr,s);

    // find length of the string

    // char str[10]="hellworld";
    // int count=0;
    // for(int i=0;str[i]!='\0';i++)
    // {
    //     count++;
    // }
    // printf("\n the length of the string is %d\t",count);

    // combine two string
    //  char a[40]="hello world";
    //  char b[40];
    //  int i;
    //  for( i=0;a[i]!='\0';i++)
    //  {
    //     b[i]=a[i];

    //  }
    //  b[i]='\0';
    //  puts(b);

    // compare two string

    // int i = 0, count = 0;
    // char a[100];
    // char b[100];
    // gets(a);
    // gets(b);

    // while (a[i] != '\0' && b[i] != '\0')
    // {
    //     if (a[i] != b[i])
    //     {
    //         count = count + 1;
    //         break;
    //     }
    //     i++;
    // }
    // if (count != 0)
    // {
    //     printf("strig is different \n");
    // }
    // else
    // {
    //     printf("string is  same\n");
    // }

    // REVERSE A STRING
// char s1[10]="dhruv",s2[10];
// int count=0,s=0,e;
// for(int i=0;s1[i]!='\0';i++)
// {
//     count++;

// }
// e=count-1;
// while(e>=0 && s<count)
// {
//     s2[s]=s1[e];
//     s++;
//     e--;
// }
// s2[s]='\0';
// puts(s2);

// CONVERT A STRING INTO LOWER CASE
// char s1[10],s2[10];
// printf("enter one string\n");
// gets(s1);
// for(int i=0;s1[i]!='\0';i++)
// {
//     if(s1[i]>='A' && s1[i]<='Z')
//     {
//         s1[i]=s1[i]+32;
//     }
// }
// printf("string in lower case is\n");
// puts(s1);


// to extract a substring from a given string
// char s1[100],s2[100];
// int ix,n,l;
// printf("enter one string\n");
// gets(s1);
// printf("\n enter index and size of sub string");
// scanf("%d %d",&ix,&n);
// l=strlen(s1);
// if(ix+n-1>l)
// {
//     printf("invalid index\n");
//     getch();
// }
// int w=0;
// for(int i=0;i<n-1;i++)
// {
//     s2[i]=s1[ix+i];

// }
// printf("your substring is\n");
// puts(s2);
    getch();
}