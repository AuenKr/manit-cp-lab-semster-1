/*
Write a C program to find largest number among three numbers using conditional operator.
*/

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("%d is greatest", a);

    else if (b >= c)
        printf("%d is greatest", b);

    else
        printf("%d is greatest", c);
    return 0;
}
