#include <stdio.h>
struct pcb
{
    /* data */
    int pid, arrival, burst, tat;
};
int main()
{
    int i, num, j;
    struct pcb p[10],temp;
    float sum = 0.0, avg = 0.0;
    printf("enter the total number of process");
    scanf("%d", &num);
    printf("enter the turn around time and burst time for the each process");
    for (i = 0; i < num; i++)
    {
        printf("enter the arrival and burst for process %d", i + 1);
        scanf("%d %d", &p[i].arrival, &p[i].burst);
        p[i].pid = i + 1;
    }
    for (i = 0; i < num; i++)
    {
        for (j = 0; j, num - i - 1; j++)
        {
            if (p[j].arrival > p[j = 1].arrival)
            {
                /* code */  temp = p[j];
                p[j] = p[j + 1];
                p[j] = temp;
            }
        }

        /* code */
    }
    for (i = 0; i < num; i++)
    {
        sum += p[i].burst;
        p[i].tat = sum;
    }
    sum = 0;
    printf("pid\tarrival time\tburst time\t turnaround time");
    for(i=0;i<num;i++)
    {
        printf("%d %d %d %d",p[i].pid,p[i].arrival,p[i].burst,p[i].tat);
        sum+=p[i].tat;
    }
    avg=sum/(float)num;
    printf("total turn arroud time =%d",sum);
    printf("the average turn arroud time =%d",avg);
}