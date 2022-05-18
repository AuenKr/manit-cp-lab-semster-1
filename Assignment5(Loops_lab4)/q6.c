/*
Write a program to print all palindrome numbers between 1 to 100 
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
            printf("%d\t", i);
    }
    printf("\n");
    return 0;
}
