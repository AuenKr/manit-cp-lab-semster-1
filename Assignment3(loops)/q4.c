/*
Write a program to print all palindrome numbers between 10 to 100
Expected output:
11 22 33 44 55 66 77 88 99
*/

#include <stdio.h>

int main()
{
    for (int i = 10; i < 100; i++)
    {
        int d1, d2, i2;
        d1 = i / 10;
        d2 = i % 10;
        i2 = d2 * 10 + d1;
        if (i == i2)
            printf("%d ", i);
    }
    return 0;
}