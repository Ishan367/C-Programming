



#include <stdio.h>

int factorial(int x) {
    int f = 1;
    for(int i = x; i >= 1; i--)
        f *= i;
    return f;
}

int main() {
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    int c = factorial(n) / (factorial(r) * factorial(n - r));
    printf("C(%d, %d) = %d", n, r, c);

    return 0;
}
