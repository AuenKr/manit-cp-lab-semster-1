/*
A five digit number is entered through the keyboard.
Write a program to reverse the number and to check whether the reversed number is same as the original number or not.
*/

#include <stdio.h>

int main()
{
    int n, d1, d2, d3, d4, d5, rev;
    printf("Enter 5 digit number :\n");
    scanf("%d", &n);

    d1 = n / 10000;
    d2 = n % 10000 / 1000;
    d3 = n % 1000 / 100;
    d4 = n % 100 / 10;
    d5 = n % 10;
    rev = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;

    printf("%d reverse number is %d", n, rev);

    return 0;
}