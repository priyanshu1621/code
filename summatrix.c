#include <stdio.h>

int main()
{
    int i,j,sum=0;
    int p[5][5]={
                {1,2,3,4,5},
                {1,2,3,4,5},
                {1,2,3,4,5},
                {1,2,3,4,5},
                {1,2,3,4,5},
    };
    
    for(i=0;i<5;i++){
        
        for(j=0;j<5;j++){
            sum+=p[i][j];
        }
        printf(" %d ",sum);
        sum=0;
    }
    printf("\n\n");
    
        for(j=0;j<5;j++){
        
        for(i=0;i<5;i++){
            sum+=p[i][j];
        }
        printf(" %d ",sum);
        sum=0;
    }

    return 0;
}
