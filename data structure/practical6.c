#include<stdio.h>
void merge(int a[],int s,int e)
{
    int mid=(s+e)/2;
    int l1=mid-s+1,l2=e-mid;
    int first[l1],second[l2];
    int k=s;
    for (int i = 0; i < l1; i++)
    {
        /* code */
        first[i]=a[k++];
    }
    int h=mid+1;
    for (int i = 0; i < l2; i++)
    {
        /* code */
        second[i]=a[h++];
    }
    int i=0,j=0,ind=s;
    while (i<l1 && j<l2)
    {
        /* code */
        if(first[i]<second[j])
        {
            a[ind++]=first[i++];

        }
        else{
            a[ind++]=second[j++];
        }
    }
    while (i<l1)
    {
        a[ind++]=first[i++];
    }
    while (j<l2)
    {
        a[ind++]=second[j++];
    }
    
    
    

}
void mergesort(int a[],int s,int e)
{
    if(s>=e)
    return;
    int mid=(s+e)/2;
    mergesort(a,s,mid);
    mergesort(a,mid+1,e);
    merge(a,s,e);
}
void print(int *a,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
}
int partion(int*a,int low,int heigh)
{int pivot=a[low];
    int i=low+1;
    int j=heigh;
    int temp;
    
    do{
        while (a[i]<=pivot)
        {
            /* code */
            i++;
        }
         while (a[j]>pivot)
        {
            /* code */
            j--;
        }
        if(i<j)
        {
         temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        }
    }
    while(i<j);
    
    
         temp=a[low];
        a[low]=a[j];
        a[j]=temp;
    
    return j;
}
void quicksort(int *a,int low,int heigh)
{
    int part;
    if(low<heigh)
    {part=partion(a,low,heigh);
        quicksort(a,low,part-1);
        quicksort(a,part+1,heigh);
    }
}
void main()
{
   
    // int a[10],i,j;
    // printf("enter the array elements\n");

    // for(int i=0;i<10;i++)
    // {
    //     scanf("%d",&a[i]);
    // }
     // slection sort
    //  for(int i=0;i<9;i++)
    //  {
    //     for ( j = i+1; j < 10; j++)

    //     {
    //         /* code */
    //         if(a[i]>a[j])
    //         {
    //             int temp=a[j];
    //             a[j]=a[i];
    //             a[i]=temp;
    //         }
    //     }
        
    //  }
    // printf("the sorted array is\n");

    // for(int i=0;i<10;i++)
    // {
    //     printf("%d\n",a[i]);
    // }
    




    // int a[10]={-1,10,1,3,7,-10,-3,5,4,7},s=0,e=9;
    // mergesort(a,s,e); 
    // for (int i = 0; i < e; i++)
    // {
    //     /* code */
    //     printf("%d\n",a[i]);
        
    // }
    




    
    int a[10]={10,4,40,6,50,7,5,12,3,10};
   int n=10;
    print(a,n);
    quicksort(a,0,n-1);
  print(a,n);

}