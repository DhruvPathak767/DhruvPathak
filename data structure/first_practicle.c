#include<stdio.h>
#include<conio.h>



void scan(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void main()
{
    int arr[50],pos1,pos2,value,num,size,temp;
    printf("enter the sizee of the array note that this is <50\n");
    scanf("%d",&size);
    printf("enter the elements of an array\n");
    scan(arr,size);
    // incerting the element

    printf("enter the position and number which you want to change");
    scanf("%d %d",&pos1,&num);

    for(int i=size-1;i>=pos1-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos1-1]=num;
    size++;

    // deleting the element


    printf("enter the position of array whose element you will want to delete note that this is not equal o the previous position \n");

    scanf("%d",&pos2);

    temp=arr[pos2-1];
    for(int i=pos2-1;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    size--;

    // traversing the array

    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
        printf("\t");
    }
    getch();


}



/* PROBLEM 2
void main()
{
int a[3][3]={1,2,3,4,5,6,7,8,9},*p;

for(p=&a[0][0];p<=&a[3-1][3-1];p++)
{
    printf("%d",*p);
    printf("\t");
}
getch();

}
*/

// SORTED ARRAY
// void scanarray(int a[],int size)
// {
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",a[i]);
//     }
// }
// void sorted(int a[],int size);
// void main()
// {

// int a[5],b[5],c[10];
// printf("enter the elements in an array");
// scanarray(a,5);
// printf("enter the elements in an array");
// scanarray(b,5);


;

