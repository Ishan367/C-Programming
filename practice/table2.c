#include <stdio.h>
int main() {
    int n;
    do{
    printf("Enter an odd integer: ");
    scanf("%d", &n);
    } while(n % 2 == 0);
    return 0;
}
    