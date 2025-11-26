#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int c = 0;
    if(n == 0) 
    {    
        c = 1; 
    } 
    else 
    {
        while(n != 0)
        {
            n = n / 10;
            c++;
        }
    }   
    printf("Number of digits: %d\n", c);
    return 0;
}