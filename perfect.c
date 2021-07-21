#include<stdio.h>
int main()
{
    int n,sum=0,rem;
    
  printf("enter the number: ");
  scanf("%d",&n);
  
     for(int i=1;i<n;i++)
    {
       
        rem=n%i;
            if(rem==0)
             { 
                sum=sum+i;
             }
    }

if(sum==n)
{
 printf("%d is perfect ",sum);
}
  else{printf("not a perfect number");}
}
