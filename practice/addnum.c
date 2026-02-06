#include <stdio.h>
int addnum(int num1, int num2);
int main(){
    int num1, num2;
    scanf("%d %d",&num1,&num2);
    int sum = addnum(num1,num2);
    printf("%d",sum);
    return 0;
}
int addnum(int num1, int num2){
    return num1+num2;
}