#include <stdio.h>
int main()
{
    float num;
    printf("Enter any number: ");
    scanf("%f",&num);
    if(num==0)
    {
        printf("The number %.2f is zero.",num);
    }
    else if(num<=0)
    {
        printf("The number %.2f is negative.",num);
    }
    else
    {
        printf("The number is positive.");
    }
    return 0;
}

