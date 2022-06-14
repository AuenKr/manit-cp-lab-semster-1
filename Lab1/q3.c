/*
Write a C program that reads two values from the keyboard, swaps their values and
prints out the result.
Test data and expected output:
Enter two values to be swapped:2 5
Values entered are a=2 and b=5
Values after swap are a=5 and b=2
*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two values to be swapped:");
    scanf("%d %d", &a, &b);
    printf("Values entered are a=%d and b=%d\n", a, b);
    printf("Values after swap are a=%d and b=%d\n", b, a);
    return 0;
}
