#include<stdio.h>
void main(){
    int alloc[10][10],max[10][10],avail[10],work[10],i,j,k,l,np,nr,need[10][10],flag,finish[10],ss[10];
    printf("enter the number of resources");
    scanf("%d",&nr);
    printf("enter the number of process");
    scanf("%d",&np);
    printf("enter the allocation matrix");
    for ( i = 0; i < np; i++)
    {
        for ( j = 0; j< nr; j++)
        {
                scanf("%d",alloc[i][j]);
        }
        
    }
    printf("enter the max matrix ");
    for ( i = 0; i < np; i++)
    {
        for ( j = 0; j< nr; j++)
        {
                scanf("%d",max[i][j]);
        }
        
    }
    printf("enter the availbale matrix");
    for ( i = 0; i < nr; i++)
    {
        scanf("%d",&avail[i]);
        work[i]=avail[i];

    }
    
    printf("the need matrix");
    for ( i = 0; i < np; i++)
    {
        for ( j = 0; j< nr; j++)
        {
                need[i][j]=max[i][j]-alloc[i][j];
        }
        
    }
    for ( i = 0; i < np; i++)
    {
        for ( j = 0; j< nr; j++)
        {
            printf("%d  ",need[i][j]);
        }
        printf("\n");
        
    }
    for(l=0;l<np;l++){  
          for ( i = 0; i < np; i++)
          {
            flag=0;
          if(finish[i]==0){
            for (j = 0; j < nr; j++)
            {
                if(need[i][j]>work[i])
                    {
                        flag=1;
                        break;
                    }                
            }
        
            if(flag==0){
                for ( j = 0; j < nr; i++)
                {
                    work[i]+=alloc[i][j];

                }
                ss[k]=i;
                k++;
                finish[i]=1;
            }

            }
            flag=1;
            for ( i = 0; i < np; i++)
            {
                if (finish[i]==0){
                    flag=0;
                    printf("the system is not in safe state");

                }
               
                
            }
            if(flag==1){
                printf("the system is in safe state");
                for ( i = 0; i < np; i++)
                {
                    printf("%d",ss[i]);
                }
                printf("%d",ss[np-1]);
                
            }
            
            


        }
        
     }
    }
    
    
