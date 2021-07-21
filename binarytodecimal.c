#include<stdio.h>
int main()
{
int n, rem ;
  int binary=0,power=1;
  printf("enter number");
  scanf("%d",&n);
  while(n!=0)
  {
    rem= n%10;
    binary=binary + rem*power;
    n=n/10;
    power=power*2;
  }
  printf("%d",binary);
  
  return 0;
}
