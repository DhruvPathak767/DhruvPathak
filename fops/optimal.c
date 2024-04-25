#include<stdio.h>
int main()
{
  int no,n,frame[20],a[20],t[20],n1,n2,n3,i,j,k,m,f=0,pos;
  printf("\n enter no of pages:\n");
  scanf("%d", &n);
  printf("\n enter the reference string:\n");
  for (i = 0; i < n; i++)
  scanf("%d", &a[i]);
  printf("\n enter the no of frames :");
  scanf("%d", &no);
  for (i = 0; i < no; i++)
    frame[i] = -1;
    for(i=0;i<n;i++)
    {
      n1=n2=0;
      for(j=0;j<no;j++)
      {
        if(frame[j]==a[i])
        {
          n1=n2=1;
          break;
        }
      }
      if(n1==0)
      {
       for(j = 0; j <no;j++)
     {
     if(frame[j] == -1)
     {
     f++;
     frame[j]=a[i];
     n2 = 1;
     break;
     }
     }
     }
     if(n2==0)
     {
          n3=0;
          for(j=0;j<no;j++)
          {
            t[j]=-1;
            for(k=i+1;k<n;k++)
            {
              if(frame[j]==a[k])
              {
                t[j]=k;
                break;
              }
            }
          }
          for(j=0;j<no;j++)
          {
            if(t[j]==-1)
            {
              pos=j;
              n3=1;
              break;
            }
          }
     
     if(n3==0)
     {
      m=t[0];
      pos=0;
      for(j=1;j<no;j++)
      {
        if(t[j]>m)
        {
          m=t[j];
          pos=j;
        }
      }
     }
     frame[pos]=a[i];
     f++;
     }
          printf("\n");
    
     for(j = 0; j < no;j++)
     {
      if(frame[j]!=-1)
     printf("|%d|\t", frame[j]);
     }
}
printf("\nPage Faults is: %d",f);
}
// }Input : Number of frames, fn = 4 
//         Reference String, pg[] = {7, 0, 1, 2, 
//                   0, 3, 0, 4, 2, 3, 0, 3, 2};
// Output : No. of hits = 7
//          No. of misses = 6