#include<stdio.h>
struct process{
    int pid,bt,wt,tat;
}p[20],temp;
void main(){
    int i,j,n;
    printf("enter the number of procers");
    scanf("%d",&n);
    printf("enter the details of process");
    for ( i = 0; i < n; i++)
    {
        printf("enter the pid burs time of p%d",i+1);
        scanf("%d%d",&p[i].pid,&p[i].bt);
    }
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i-1; i++)
        {
            if(p[j].bt>p[j+1].bt){
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
    printf("process id\tburst time\t waiting time\t turnaroundtime\t");
    printf("----------\t----------\t------------\t-----------------\t");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t",p[i].pid,p[i].bt,p[i].wt,p[i].tat);
    }
       
    
}