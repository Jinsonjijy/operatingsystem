#include<stdio.h>
#include<stdlib.h>
void main(){
    int n,rq[100],i,intial,j,totalheadmovment=0,index,size;
    printf("enter the number of request");
    scanf("%d",&n);
    printf("enter the sequence of the  request");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&rq[i]); 
    }
    printf("enter the size of the disk");
    scanf("%d",&size);
    printf("enter the intail headposition");
    scanf("%d",&intial);
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j< n-i-1;j++)
        {
            if (rq[j]>rq[j+1])
            {
                int temp;
                temp=rq[j];
                rq[i]=rq[j+1];
                rq[j+1]=temp;
            }
            
        }
        
    }
    for ( i = 0; i < n; i++)
    {
        if(intial<rq[i]){
            index=i;
            break;
        }
    }
    int move;
    printf("enter the way of movement 1 for high 0 for low");
    scanf("%d",&move);
    if(move==1){
        for ( i = index; i < n; i++)
        {
            totalheadmovment+=abs(rq[i]-intial);
            intial=rq[i];
        }
        totalheadmovment+=abs(size-rq[i]-1);
        for ( i = index-1; i >=0; i--)
        {
            totalheadmovment+=abs(rq[i]-intial);
            intial=rq[i];
        }
        
        
    }
    if(move==0){
        for ( i = index; i <=0; i++)
        {
            /* code */
        }
        
    }
    

}