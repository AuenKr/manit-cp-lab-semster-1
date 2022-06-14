/*
Write a C program that reads an integer n from the keyboard and prints out the factorial of n. 
*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter an integer:");
    scanf("%d", &n);
    if (n >= 0)
    {
        if (n > 0)
        {
            int fact = 1;
            for (int i = 1; i <= n; i++)
            {
                fact *= i; // fact= fact*i
            }
            printf("Factorial of %d is %d\n", n, fact);
        }
        else
            printf("Factorial of 0 is 1\n");
    }

    else
        printf("number muat be non-negative\n");

    return 0;
}
