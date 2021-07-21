#include<stdio.h>
int main()
{ int base,exponent, power=1;
  
  printf("enter base and then exponent: ");
  scanf("%d %d",&base,&exponent);
 
 int expo=exponent;
 if(exponent>0)
 {
        while(exponent!=0)
        {   power=power*base;
             exponent--;
         }
       printf("%d to the power %d is = %d ",base,expo,power);
 
 }
 else
 {
    double power1 =1.0;
    
      while(exponent!=0)
      { 
          power1= power1*(1.0 /base);
          exponent++;
      }
 printf("%d to the power %d is = %.10f",base,exponent,power1);
 }
 
 
}
