#include<stdio.h>
int fact(int n)
{
  int res=1;
  while(n!=0)
  {
    res=res*n;
    n--;
  }
  return res;
}
int main()
{
printf("%d",fact(6));

}

or

#include<stdio.h>
int fact(int n)
{
  int res=1;
 if(n==1)
  {
    return 1;
  }
 else{res=n*fact(n-1);}
  
}
int main()
{
printf("%d",fact(6));

}

