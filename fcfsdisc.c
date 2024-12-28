#include<stdio.h>
#include<stdlib.h>
void main(){
    int rq[100],i,n,intial,totalheadmovment;
    totalheadmovment=0;
    printf("enter the number of request");
    scanf("%d",&n);
    printf("enter the intial headposititon");
    scanf("%d",&intial);
    printf("enter the request sequence");
    for ( i = 0; i < n; i++)
    {
      scanf("%d",&rq[i]);  
    }
    for ( i = 0; i <n ; i++)
    {
        totalheadmovment=totalheadmovment+abs(rq[i]-intial);
        intial=rq[i];
    }
    printf("total headmovement =%d",totalheadmovment);
    
    
}