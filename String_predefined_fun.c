#include<stdio.h>
int main(){
    char p[20] = "Priyanshu";
    char g[30] = "Gaur";
    char d[50];
    int i = 0, j = 0;
    
    while(p[i] != '\0'){
        d[j] =p[i];
        i++;
        j++;
    }
    i = 0;
    while(g[i] != '\0' ){
        d[j] = g[i];
        i++;
        j++;
    }
    d[j] = '\0';
    printf("%s" , d);
    return 0 ;
}

//STRING COPY
int main()
{
    int i,j =0;char c[80];
    char a[] = "Hey my name is ",b[60]="Priyanshu ";
    
    while(a[i] != '\0'){
        b[11] = a[i];
        i++;
      
    }
    
    b[i] = '\0';
    printf("%s" ,b);
    return 0;
}

//STRING LENGTH

#include<stdio.h>
int main(){
    
    int i;
    char p[20];
    printf("ENter the string: ");
    scanf("%s", p);
    for(i = 0 ; p[i] != '\0' ; i++) ;
    printf("The length of String is: %d", i);
    
return 0;}
