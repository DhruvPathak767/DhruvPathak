#include<stdio.h>
#include<conio.h>
void display();
void fineset(int value);
int check(int e);

int framenumber,pages[100],n,frame[100],hit=0,fault=0,p=0;
void main()
{
    printf("enter the number of pages\n");
    scanf("%d",&n);
    printf("enter the reference string\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&pages[i]);
        /* code */
    }
    printf("enter the size of frame\n");
    scanf("%d",&framenumber);
    for (int i = 0; i < n; i++)
    {
        fineset(pages[i]);
        /* code */
    }
    printf("number of hits=\t%d",hit);
    printf("number of faults=\t%d",fault);
    
    

}
void fineset(int value)
{
    if (check(value))
    {
        frame[p]=value;
        p=(p+1)%framenumber;
        fault++;
        display();
        /* code */
    }

    
}
int check(int e)
{
    for (int i = 0; i < framenumber; i++)
    {
        if(frame[i]==e)
        {
        hit++;
        display();
        return 0;
        }
        /* code */
    }
    return 1;
    
}
void display()
{
    int i;
    for(i=0;i<framenumber;i++)
    {
        printf("%d\t",frame[i]);
    }
    printf("\n");
}