//Sum of number.

#include<stdio.h>
int main()
{
 int n,m;

printf("enter num: ");
scanf("%d",&n);

int sum=0;
while(n>0)
{
m=n%10;
sum=sum+m;
n/=10;
}
printf("%d",sum);


return 0;
}

//reverse

#include<stdio.h>
int main()
{
 int n,m;

printf("enter num: ");
scanf("%d",&n);

int sum=0;
while(n>0)
{
m=n%10;
sum=sum*10+m;
n=n/10;
}
printf("%d",sum);


return 0;
}
