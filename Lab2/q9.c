/*
Program to divide an integer by 4 without using ‘/’ operator.
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num);
    if (num % 4 == 0)
        printf("%d is divisible by 4\n", num);
    else
        printf("%d is not divisible by 4\n", num);
    return 0;
}
