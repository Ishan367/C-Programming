
#include <stdio.h>
int squarenum(int num1){
    int result = num1 * num1 ;
    return result;

}
int main() {
    int result;
    int num1;
    scanf("%d",&num1);
    int x = squarenum(num1);
    printf("%d",x);
    return 0;
   
}
    
    
        
