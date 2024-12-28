#include<stdio.h>
struct process{
    int pid,bt,pr,wt,tat;
}p[20],temp;
void main(){
    int i,j,n;
    float awt,atat;
    printf("enter the number of procers");
    scanf("%d",&n);
    printf("enter the details of process");
    for ( i = 0; i < n; i++)
    {
        printf("enter the pid burs time and priority of p%d",i+1);
        scanf("%d%d%d",&p[i].pid,&p[i].bt,&p[i].pr,&p[i].pr);
    }
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i-1; i++)
        {
            if(p[j].pr>p[j+1].pr){
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
        
    }
    p[i].wt=0;
    p[i].tat=p[i].bt;
    for ( i = 1; i < n; i++)
    {
        p[i].wt=p[i-1].tat;
        p[i].tat=p[i].wt+p[i].bt;
    }
    printf("process id\tburst time\tpriority\t waiting time\t turnaroundtime\t");
    printf("----------\t----------\t------------\t-----------------\t");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t",p[i].pid,p[i].bt,p[i].wt,p[i].tat);
    }
    for ( i = 0; i < n; i++)
    {
        awt+=p[i].wt;
        atat+=p[i].tat;
    }
       printf("avetage waiting tiem %f,%f",awt/n,atat/n);
    
}