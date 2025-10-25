#include <stdio.h>
int main()
{
    int n;
    float sum;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("The sum of the first %d terms is: %f\n", n, sum);
    return 0;
}

