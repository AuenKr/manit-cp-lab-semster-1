/*
Write a C program to read an integer and print its multiplication table
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num);

    for (int i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    return 0;
}