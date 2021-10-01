

#include <stdio.h>

int main()
{
    int num, binnum=0,decimalnum=0, rem,base =1;
    
    printf("Enter the Binary Number: ");
    scanf("%d", &num);
    
    binnum = num ; 
    
    while(num !=0 ){
        
        rem = num %10 ;
        decimalnum += rem * base;
        num = num/ 10 ;
        base = base*2;
    }
    
        printf("%d\n", decimalnum);
        printf("%d", binnum);
    return 0;
}
