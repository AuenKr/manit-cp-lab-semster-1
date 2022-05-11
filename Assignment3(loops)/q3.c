/*
Write a C program that calculates the sum of integers between 9 and 300 inclusive which
are divisible by 7 but not divisible by 63.
Expected output:
Sum of integers between 9 & 300 that are divisible by 7 but not by 63 is 5684
*/
#include <stdio.h>

int main()
{
    int i = 9, sum = 0;
    for (; i <= 300; i++)
    {
        if (i % 7 == 0 && i % 63 != 0)
            sum += i;
    }
    printf("Sum of integers between 9 & 300 that are divisible by 7 but not by 63 is %d\n", sum);
    return 0;
}
