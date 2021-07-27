// fizzbuzz program

#include <stdio.h>


int main()
{
    int sum;
    for(int i=1;i<=100;i++)
    {
        { sum= i%3==0 ? (i%5==0 ? printf("%d FIZZBUZZ\n",i): printf("%d BUZZ\n",i) ) :     i%5==0? printf("%d FIZZ\n",i) :printf("%d\n",i)  ; }
        
    }
}
