// Write a program to compute the reverse of a 4 digit number.

#include <stdio.h>

int main()
{
    int n, d1, d2, d3, d4, reverse;
    printf("Enter any 4 digit number :");
    scanf("%d", &n);
    if (n % 10000 == 0)
    {
        d1 = n / 1000;
        d2 = n % 1000 / 100;
        d3 = n % 100 / 10;
        d4 = n % 10;
        reverse = d4 * 1000 + d3 * 100 + d2 * 10 + d1;
        printf("Reverse of %d is %d", n, reverse);
    }
    else
    {
        printf("Please enter 4 digit no only.");
    }
    return 0;
}