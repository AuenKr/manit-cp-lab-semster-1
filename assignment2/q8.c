/*
Write a C program to Find the Largest Number among Three Numbers using nested if-else.
*/
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 3 numbers :\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b)
    {
        if (a >= c)
            printf("%d is greatest", a);
        else
            printf("%d is greatest", c);
    }
    else
    {
        if (b >= c)
            printf("%d is greatest", b);
        else
            printf("%d is greatest", c);
    }
    return 0;
}