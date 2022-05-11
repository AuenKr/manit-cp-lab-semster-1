/*
Write a program using conditional operators to determine whether a year entered through the keyboard is a leap year or not.
*/

#include <stdio.h>

int main()
{
    int y;
    printf("Enter year : ");
    scanf("%d", &y);

    if (y % 4 == 0)
        printf("%d is leap year\n", y);

    else
        printf("%d is not leap year\n", y);

    return 0;
}
