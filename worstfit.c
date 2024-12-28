#include<stdio.h>
struct block{
    int id ,size,allc;
}b[10],temp;
struct process{
    int id,size,blkno;
}p[10];
void main(){
    int n,m,i,j;
    printf("enter the number of process");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("enter the process id and size");
        scanf("%d%d",&p[i].id,&p[i].size);
        p[i].blkno=-1;
    }
    printf("enter the number of block");
    scanf("%d",&m);
    for ( i = 0; i < m; i++)
    {
        printf("enter the block id and block size ");
        scanf("%d%d",&b[i].id,&b[i].size);
        b[i].allc=-1;
    }
    for ( i = 0; i < m-1; i++)
    {
        for ( j = 0; j < m-i-1; j++)
        {
            if(b[j].size<b[j+1].size){
                
                temp=b[j+1];
                b[j+1]=b[j];
                b[j]=temp;

            }
        }
        
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            if(b[i].allc==-1&&p[i].size>=b[j].size){
                b[j].allc=1;
                p[i].blkno=b[j].id;
                break;
            }
        }
        
    }
    
    
    
}