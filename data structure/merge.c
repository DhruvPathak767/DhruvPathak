#include<stdio.h>
void merge(int arr[],int mid,int s,int e)
{
    int n1,n2;
    n1=mid-s+1;
    n2=e-mid;
    int a1[n1],a2[n2];
    int k=s;
    for (int i = 0; i < n1; i++)
    {
        /* code */
        a1[i]=arr[k];
        k++;
    }
    int h=mid+1;

    for (int i = 0; i < n2; i++)
    {
        /* code */
        a2[i]=arr[h];
        h++;
    }
    int i=0,j=0,ind=s;
    while (i<n1 && j<n2)
    {
        /* code */
        if(a1[i]<a2[j])
        {
            arr[ind++]=a1[i++];
        }
if(a2[j]<a1[i])
        {
            arr[ind++]=a2[j++];
        }
    }
    while (i<n1)
    {
        /* code */
        arr[ind++]=a1[i++];
    }
     while (j<n2)
    {
        /* code */
        arr[ind++]=a2[j++];
    }
    
    
    

}
void print(int *a,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
}
void mergesort(int arr[],int s,int e)
{
    int mid=s+(e-s)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,mid,s,e);
}
int main()
{
    int a[10]={-1,10,1,3,7,-10,-3,5,4,7},s=0,e=9;
     mergesort(a,s,e); 
    for (int i = 0; i < e; i++)
     {
         /* code */
         printf("%d\n",a[i]);
        
     }
}