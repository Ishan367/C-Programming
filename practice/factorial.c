#include <stdio.h>
int main() {
    int n,p=1;
    printf("Enter an number: ");
    scanf("%d", &n);
    for (int i = n; i>=1; i--) {
        p = p*i;
    }
    printf("%d",p);
    return 0;

}