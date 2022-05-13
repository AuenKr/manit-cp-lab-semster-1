/*
Write a C program that accepts a real number x from the keyboard and prints out the corresponding value of sin(1/x) using 4-decimal places.
Test data and expected output:
Enter value of x: 0.5 Value of sin(1/x) is 0.9093
Enter value of x: 0 Value of x must be nonzero: try again
*/
#include <math.h>
#include <stdio.h>

#define PI 22 / 7

int main()
{
    float x, value, temp;

    printf("Entered value of x : ");
    scanf("%f", &x);
    if (x > 0)
    {
        temp = 1 / x;
        value = sin(temp); // converted degree into radian
        printf("Value of sin(1/x) is %.4f\n", value);
    }

    else
        printf("Value of x must be non zero: try again\n");
    return 0;
}