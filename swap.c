//SWAPING OF NIUMBER

#include<stdio.h>
int main()
{
 int a,b;

printf("enter num: ");
scanf("%d %d",&a,&b);

a=a+b;
b=a-b;
a=a-b;

printf("%d %d",a,b);

return 0;
}

OR

#include<stdio.h>
int main()
{
 int a,b;

printf("enter num: ");
scanf("%d %d",&a,&b);

a=a*b;
b=a/b;
a=a/b;

printf("%d %d",a,b);

return 0;
}