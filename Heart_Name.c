#include <stdio.h>
#include<string.h>
int main()
{
    int i, j, N;
    int count, len;
    char name[23];
    
    printf("Enter Value of N : ");
     gets(name);

    printf("Enter Value of N : ");
    scanf("%d", &N);
    
     
    len = strlen(name);    

    for(i=N/2; i<=N; i+=2)
    {
        for(j=1; j <N-i ; j+=2){
            printf(" ");
        }
        
        for(j=1; j <=i ; j++){
            printf("*");
        }
        
        for(j=1; j <=N-i ; j++){
            printf(" ");
        }
        
        for(j=1; j<=i ; j++){
            printf("*");
        }
        
        printf("\n");
    }
    
    for(i=N; i>=1;i--){
        
        for(j=i;j<N;j++){

        printf(" ");
        }
        
        if(i==N){
            for(j=1;j<=(N*2 - len)/2; j++){
                printf("*");
            }
            
            printf("%s",name);
            
            for(j=1 ; j<(N*2 - len)/2 ;j++){
                printf("*");
            }
        } 
            else{
                for(j=1;j<(2*i ) - 1; j++){
                    printf("*");
                }
            }
            printf("\n");
        
        
    }
    
        printf("\n");
    

    return 0;
}
