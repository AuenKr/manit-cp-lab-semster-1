/*
Write a program to check if two numbers are equal without using arithmetic operators or comparison operators.
*/

#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter number 1 : ");
    scanf("%d", &n1);
    printf("Enter number 2 : ");
    scanf("%d", &n2);
    if (n1^n2)
    {
        printf("Enter %d and %d are not equal\n", n1, n2);
    }
    else
        printf("Enter %d and %d are equal\n", n1, n2);

    return 0;
}