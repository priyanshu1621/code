#include <stdio.h>
int main()
{
    int n,i,j,pg[40],c=0 ,b,k=0;
    char arr[20];
    int p[20] ;

    printf("Enter the elements of the array:");
    scanf("%s" , arr);
    
    for(i = 0 ; arr[i] != '\0' ; i++){
        
        c=1;
        if(arr[i]!= -1)
        {
            for(j = i+1; arr[j] != '\0' ; j++){
                
                if(arr[i]==arr[j]){
                    c++;
                    arr[j] = -1;
                }
            }
             pg[i] =c ;
        
        }
        
    }
    
    for(i =0 ; arr[i] != '\0' ; i++){
        
        if(arr[i] != -1){
            printf("%c comes %d times ",arr[i],pg[i]);
            
            for(j=1; j <=pg[i]; j++){
            printf("*");
            }
            k++;
            printf("\n");
        }
    }
    return 0;
}
