#include <stdio.h>

int main()
{
    int num,divisor;
    
    printf("enter num");
    scanf("%d",&num);
    
    printf("enter divisor");
    scanf("%d",&divisor);
    
    while(num>= divisor)
    {
        num-=divisor;
    }
    printf("%d",num);

    return 0;
}
