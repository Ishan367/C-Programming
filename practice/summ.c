#include <stdio.h>
int main() {
    int a,sum=0;
    printf("Enter an integer: ");
    scanf("%d", &a);   
    for(int i=a; i>=1; i--){
        sum = sum+i; 
        
    }
    printf("%d", sum);
    return 0;
    }  

