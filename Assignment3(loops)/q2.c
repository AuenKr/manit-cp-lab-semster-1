/*
Write a C program that reads an integer n from the keyboard and prints out the factorial of
n.
Test data and expected output:
Enter an integer:6
Factorial of 6 is 720
Enter an integer:-3
number must be non-negative
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
            printf("Factorial of %d is %d", n, fact);
        }
        else
            printf("Factorial of 0 is 1");
    }

    else
        printf("number muat be non-negative");

    return 0;
}
