#include <stdio.h>
int main()
{
    float unit,bill;
    printf("Enter the number of units consumed: ");
    scanf("%f", &unit);
    if (unit <= 100)
    {
        bill = unit * 1.5;
    }
    else if (unit>=100 && unit <= 200)
    {
        bill = (unit * 2);
    }
    else if (unit>=200 && unit <= 300)
    {
        bill = (unit * 3);
    }
    else
    {
        bill = (unit * 5);
    }
    printf("The total electricity bill is: %.2f\n", bill);
    return 0;   

}
