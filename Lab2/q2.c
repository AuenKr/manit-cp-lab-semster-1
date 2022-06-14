/*
Program to find Maximum and minimum of two numbers without using any loop or condition.
*/

#include <stdio.h>

int main()
{
    int n1, n2, max, mim;
    printf("Entered number n1 : ");
    scanf("%d", &n1);
    printf("Entered number n2 : ");
    scanf("%d", &n2);
    
    mim=(n1>=n2)*n2 + (n2>n1)*n1;
    max=(n1>=n2)*n1 + (n2>n1)*n2;
    printf("Maximum is %d, Minimum is %d\n", max, mim);
    return 0;
}