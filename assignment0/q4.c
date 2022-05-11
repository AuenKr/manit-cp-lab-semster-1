//Write a program to add two numbers. Take input from the user

#include <stdio.h>

int main()
{
    int a, b, sum;
    printf("Enter value of a and b\n");
    scanf("%d %d",&a, &b);
    sum = a+ b;
    printf("%d + %d = %d\n", a, b, sum);
    return 0;
}
