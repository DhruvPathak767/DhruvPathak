#include<stdio.h>

int lru(int time[],int f)
{
    int min=time[0],loc=0;
    for (int i = 1; i < f; i++)
    {
        if (time[i]<min)
        {min=time[i];
        loc=i;
        
            /* code */
        }
        
        /* code */
        
    }
    return loc;
    

}
void main()
{
    int nuofframes,nuofpages,page[29],frame[20],flag1=0,flag2=0,count=0,pos,fault=0,time[20],i,j;
    printf("enter the number of pages\n");
    scanf("%d",&nuofpages);
    printf("enter the number of frames\n");
    scanf("%d",&nuofframes);
    printf("enter the pages\n");
    for ( i = 0; i < nuofpages; i++)
    {
        /* code */scanf("%d",&page[i]);
    }
    for ( i = 0; i < nuofframes; i++)
    {
        /* code */frame[i]=-1;
    }
    for ( i = 0; i < nuofpages; i++)
    {
        for ( j = 0; j < nuofframes; j++)
        {
            /* code */
            if (frame[j]==page[i])
            {
                /* code */
                count++;
                time[j]=count;
                flag1=flag2=1;
                break;

            }
            
        }
        if (flag1 ==0)
        {
            for ( j = 0; j < nuofframes; j++)
            {
                if (frame[j]==-1)
                {
                    count++;
                    fault++;
                    frame[j]==page[i];
                    time[j]=count;
                    flag2=1;
                    break;
                    /* code */
                }
                
                /* code */
            }
            
        }
       if (flag2==0)
       {
        pos=lru(time,nuofframes);
        count++;
         fault++;
        frame[pos]=page[i];
        time[pos]=count;
       
        /* code */
       }
       printf("\n");

    for (int k = 0; k < nuofframes; k++)
    {
     
        printf("|%d|\t", frame[k]);
    }

        
        
        /* code */
    }
    printf("the number of pagefault is : %d",fault);
    

    
}