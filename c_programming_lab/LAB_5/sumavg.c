#include <stdio.h>
int main()  
{  
    int n;
    int i;
    int sum;
    float avg;
    int v;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf(" enter the %d numbers\n", n);
        scanf("%d", &v);
        sum = sum + v;
    }
    printf("Sum is %d\n", sum);

    return 0;
}