
#include <stdio.h>
int main()
{   int ch,k,p;
   long int balance=20000;
   long withdral_amount;
   long deposit;
   
  do{       printf("HEY THERE!!\n");
            printf("    1. Balance\n");
            printf("    2. Withdraw\n");
            printf("    3. Deposit\n");
            printf("    4. Exit\n");
            
     printf("enter your choise: ");
    scanf("%d",&ch);
    
  switch(ch)
  {    
        case 1: printf("\nyour Account balance is %d",balance);break;
    
                        
        case 2: 
                    {   printf("\n enter Amount of withdral_amoun \n");
                        scanf("%d",&withdral_amount);
                        
                                if(withdral_amount %100 !=0 )
                                  {
                           
                                                printf("AMOUNT, ENTER SHOULD BE IN MULTIPLES OF 100 ");
                                  }
                                    else if(withdral_amount>balance){printf("insuffient balance");}
                                    else{ balance -= withdral_amount; 
                       
                                                 printf("\ncollect your money\n");
                             
                                                    printf("your current balance is %d", balance);
                                        }
                         break;
    
                    }
        case 3: { 
                        printf("\nenter the amount u want to deposit");
                    scanf("%d",&deposit);
                    
                    balance += deposit;
                    
                    printf("after deposit your balance is %d",balance);
                    break;
                }    
        case 4: printf("Thanks for using ATM");
                break;
       default : printf("wrong input");
   }
    printf("\n\nlike to use ATM service again?   y/n");
    fflush(stdin);
   scanf("%c", &p);
   if(p=='N' || p=='n')
    p=1;
   
  }while(!k);
   
}
