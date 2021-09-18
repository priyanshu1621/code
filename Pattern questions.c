#include<stdio.h>
int main(){
  int i,j , n = 5 ;
  for(i =1 ; i <= n ; i++){
    for(j = 1 ; j<= 2*n ; j++){
      
      if(i<j) printf(" ");
      else printf("*");
      
      if((i< (2*n ) - j)) pritnf(" ");
      else printf("*");
    }
  printf("\n");}
  
    for(i =1 ; i <= n ; i++){
    for(j = 1 ; j<= 2*n ; j++){
      
      if(i > n-j +1) printf(" ");
      else printf("*");
      
      if( (( n+i ) > j)) pritnf(" ");
      else printf("*");
    }
  printf("\n");}
return 0;}



// // hollod diamond
// #include<stdio.h>
// int main(){
//   int i,j , n = 5 ;
    
//      for(i =1 ; i <= n ; i++){
//     for(j = 1 ; j<= 2*n ; j++){
      
//       if(i > n-j +1) printf(" ");
//       else printf("*");
      
//       if( (( n+i ) > j)) pritnf(" ");
//       else printf("*");
//     }
//   printf("\n");}
    
//   for(i =1 ; i <= n ; i++){
//     for(j = 1 ; j<= 2*n ; j++){
      
//       if(i<j) printf(" ");
//       else printf("*");
      
//       if((i< (2*n ) - j)) pritnf(" ");
//       else printf("*");
//     }
//   printf("\n");}
  
   
// return 0;}
