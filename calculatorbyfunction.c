#include<stdio.h>

 void bal(int balance)
 {
     printf("\nbalance: %d\n\n",balance);
 }
int withdraw(int balance)
 {
        int amt;
         printf("\n enter the withdral amount:  ");
         scanf("%d",&amt);
         balance=balance-amt;
        return balance;
 }
int amountdeposit(int balance)
 {       int dep;
         printf("\nenter the deposit amount:  ");
         scanf("%d",&dep);
         balance=balance+dep;
         return balance;
 }
int main()
  { 
      int balance=10000,ch,k;
      char p;
 do{
     printf("***************\n 1. Balance \n 2. Withdraw\n 3. Deposit\n 4. exit\n********** \n Enter your choise:");
     scanf("%d",&ch);
     
    switch(ch)
    {
        case 1: bal(balance);
                break;
        
        case 2: balance=withdraw(balance);
                break;
        
       case 3: balance=amountdeposit(balance);
               break;
       
        case 4: printf("\n thanks for using our service"); 
                 k=1;
                break;
                
       //default : printf("wrong input"); break;      
    }
    
    
   
    
    }while(k!=1);
 return 0;
} 
