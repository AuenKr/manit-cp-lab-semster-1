/*
Write a C program that accepts a distance in inches and prints the corresponding
value in cms. Note that 1 inch = 2.54 cm.
Test data and expected output:
Enter the distance in inches:3
Distance 3.00 inches is = 7.62 cms

*/
#include <stdio.h>

int main()
{
    float i, cm;
    printf("Enter distance in inches:");
    scanf("%f",&i);
    cm=i*2.54;
    printf("Distance %.2f inches is = %.2f cms",i, cm);
    return 0;
}