#include <stdio.h>
int main()
{
    float a, b, result;
    int c;

    printf("a simple calculator\n\n");
    printf("enter the first number\n");
    scanf("%f",&a);
    printf("enter the second number\n");
    scanf("%f",&b);
    printf("enter 1 for addition\n");
    printf("enter 2 for multiplication\n");
    printf("enter 3 for subtraction\n");
    printf("enter 4 for division\n");
    printf("enter the operator");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        result = a+b;
        printf("result for addition %f",result);
        break;

        case 2:
        result = a*b;
        printf("result for multiplication %f",result);
        break;

        case 3:
        result = a-b;
        printf("result for subtraction %f",result);
        break;

        case 4:
        result = a/b;
        if 
        printf("result for division %f",result);
        break;
    return 0;

    }
}