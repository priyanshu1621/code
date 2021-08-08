#include <stdio.h>
#define max 50
int main()
{ int a[max][max],b[max][max],product[max][max];
  int arow,acolumn,brow,bcolumn;
int i,j,k,sum=0;

   printf("Enter row and column:"); 
   scanf("%d %d",&arow,&acolumn);
 
   
   printf("Enter elements of first Matrix\n");
    for(i=0;i<arow;i++){
        
        for(j=0;j<acolumn;j++){
            
            scanf("%d",&a[i][j]);
        }
    printf("\n");
    }
    
     printf("Enter row and column of 2nd matrix:");
    scanf("%d %d",&brow,&bcolumn);
    if(brow != acolumn){
        printf("sorry u can't multiply the matrix a and b!!");
    }
      else{ printf("Enter elements of first Matrix\n");
        for(i=0;i<brow;i++){
        
        for(j=0;j<bcolumn;j++){
            
            scanf("%d",&b[i][j]);
        }
          printf("\n");
    }
    
      }
      printf("\n");
      for(i=0;i<arow;i++){
          for(j=0;j<bcolumn; j++){
              
              for(k=0;k<acolumn;k++){
                  
                   sum+= a[i][k] * b[k][j];
              }
             product[i][j] = sum;
             sum=0;
          }
          
      }
      
      printf("the product of the Matrix is: \n");
      for(i=0;i<arow;i++){
          for(j=0;j<bcolumn;j++){
              printf("%d ",product[i][j]);
          }
          printf("\n");
      }
      
    return 0;
}
