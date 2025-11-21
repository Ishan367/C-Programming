#include <stdio.h>
int main()  
{  
    int n, count, sum;
    scanf("%d", &n);
    sum = 0;
    count = 1;
    while(count <= n)  
    {  
        sum = sum + count;  
        count++;  
    }
    printf("%d\n", sum);
    return 0;   
}
