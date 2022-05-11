/*
Write a C program that accepts a temperature in Fahrenheit and prints the
corresponding temperature in Celsius. C/5 = (F −32)/9
Test data and expected output:
Enter temp in Farenheit:98.4
Temp 98.40 in Farenheit = 36.89 Centigrade
*/

#include <stdio.h>

int main()
{
    float F, C;
    printf("Enter temp in Farenheit:");
    scanf("%f", &F);
    C = ((F - 32) / 9) * 5;
    printf("Temp %.2f in farenheit = %.2f Centigrade\n", F, C);
    return 0;
}
