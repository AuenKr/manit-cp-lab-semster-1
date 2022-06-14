/*
Write a C program to find largest number among four numbers using conditional operator.
*/

#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter 4 numbers:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a >= b && a >= c && a >= d)
        printf("%d is greatest\n", a);

    else if (b >= c && b >= d)
        printf("%d is greatest\n", b);

    else if (c >= d)
        printf("%d is greatest\n", c);

    else
        printf("%d is greatest\n", d);

    return 0;
}
