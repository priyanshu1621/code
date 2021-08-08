#include <stdio.h>
void minMax(int arry[], int len, int *min, int *max){
    
    *min = *max = arry[0];
    int i;
    for(i = 0; i < len; i++){
        
        if(arry[i] <*min){
            *min = arry[i];
        }
        if(arry[i] > *max){
              *max = arry[i];
        }
    }
    
}

int main()
{
    int a[] = {13,22,54,-98,65,12,4,56,345,-876,9887,-0,876};
    int max,min;
    int len = sizeof(a)/sizeof(a[0]);
    minMax(a,len,&min,&max);
    printf("The Max number is %d and the Min number is %d ",max ,min);

    return 0;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
int main()
{ 
    int i[] = {10,20,30,440,2,4,-987,987};
   int min, max;
   min = max = i[0];
 
 for(int a=1;a<=7;a++){
         if(a[i]<i[0]){
       
            min = i[a]; 
          }
        else{             ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            max = i[a];
        
          }
     }
     
    printf("The max num is %d and the min num is %d ",max,min);
}
