#include <stdio.h>

int main()
{int n,rem;
    int seen[9]={0};
    
    printf("enter num");
    scanf("%d",&n);
    
    while(n>0){
        rem=n%10;
        if(seen[rem]==1){
            break;
        }
        seen[rem]=1;
        n=n/10;
        
    }
    
    
if(n>0){
    printf("yes");
}else{printf("no");}
    return 0;
}
