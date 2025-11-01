#include <stdio.h>
int main()
{
    int a = 5, b = 2;
    float c = a/b;
    float d = (float)a/b;
    printf("%.2f %.2f",c, d);
    return 0;
}