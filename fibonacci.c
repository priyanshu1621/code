#include<stdio.h>
int main()
  {
  int a, b, i, sum,n;
  printf("enter num ");
  scanf("%d",&n);
  
  a=0;
  b=1;
  for(i=1; i<=n; i++)
  {
    printf("%d\t",a);
    sum= a+ b;
    a = b;
    b = sum;
  }
  
}
