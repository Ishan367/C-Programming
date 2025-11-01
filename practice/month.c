#include <stdio.h>
int main()
{
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);        
    switch(month)
    {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("march\n");
            break;
        return 0;

    }
}
