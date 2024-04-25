#include<stdio.h>

void bubblesort(int a[],int size);

void print(int a[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        printf("%d\n",&a[i]);
    }
}
void merge(int a[],int  s,int e,int mid)
{
    int n1=mid-s+1;
    int n2=e-mid;
    int a1[n1],a2[n2];
    int k=s;
    for(int i=0;i<n1;i++)
    {
        a1[i]=a[k];
        k++;
    }
    int h=mid+1;
     for(int i=0;i<n2;i++)
    {
        a1[i]=a[h];
        h++;
    }
    int i=0,j=0,ind=s;
    while(i<n1 && j<n2)
    {
        if(a2[j]<a1[i])
        {
            a[ind++]=a1[i++];
        }
    

        if(a2[j]<a2[j])
        {
            a[ind++]=a2[j++];
        }
       while (i<n1)
       {
         a[ind++]=a1[i++];
       
        /* code */
       }
         while (j<n2)
       {
         a[ind++]=a2[j++];
       
        /* code */
       }
       
    }

}


void mergesort(int a[],int s,int e)
{
    int mid=(s+e)/2;
    mergesort(a,s,mid+1);
    mergesort(a,mid+1,e);
    merge(a,s,e,mid);
}
int main()
{
    int a[7]={10,2,34,5,4,60,80};
    int size=7;
    //bubble sort
    // for(int i=0;i<size-1;i++)
    // {
    //     for(int j=0;j<size-1-i;j++)
    //     {
    //         if(a[j]>a[j+1])
    //         {
    //             int temp=a[j];
    //             a[j]=a[j+1];
    //             a[j+1]=temp;
    //         }
    //     }
    // }

    //insertion sort
    // for(int i=1;i<7;i++)
    // {
    //     for(int j=0;j<i;j++)
    //     {
    //         if(a[j]>a[i])
    //         {
    //             int temp=a[i];
    //             a[i]=a[j];
    //             a[j]=temp;
    //         }
    //     }
    // }

    //selection sort
    // for(int i=0;i<7;i++)
    // {
    //     for(int j=i+1;j<7;j++)
    //     {
    //         if(a[i]>a[j])
    //         {
    //             int temp=a[i];
    //             a[i]=a[j];
    //             a[j]=temp;
    //         }
    //     }
    // }
int s=0,e=7;
    mergesort(a,s,e);
   for(int i=0;i<size-1;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
void bubblesort(int a[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}