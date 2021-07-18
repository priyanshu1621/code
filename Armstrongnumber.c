#include <stdio.h>

int main()
{
    int num,count=0;
    
    printf("enter number:  ");
    scanf("%d",&num);
      int q=num;
   while(q!=0)
   {
       q/=10;
       count++;
   }
   
   q=num;
int cnt =count;
 int mul=1,result,rem; 
 
   
    while(q!=0)
    { rem=q%10;
        while(cnt!=0)
        {
            mul=mul*rem;
            cnt--;
        }
     result +=mul;
     cnt=count;
     q /=10;
     mul=1;
        
    }
if(result==num)
{
    printf("the number is Armstrong");
}
else{    printf("the number is  Not Armstrong");
}

    return 0;
}
