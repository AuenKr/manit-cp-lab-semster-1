/*
A perfect number is a positive number in which sum of all positive divisors excluding that number is equal to that number. 
Write a C program that accepts a positive integer from the keyboard and checks whether the entered number is a perfect number.
Test data and expected output:
Enter a positive integer:-2
Input must be positive
Enter a positive integer:8128
8128 is a perfect number
Enter a positive integer:28
28 is a perfect number
Enter a positive integer:64
64 is NOT a perfect number
*/

#include <stdio.h>

int main()
{
    int n, sum;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n > 0)
    {
        for (int i=1; i<n; i++)
        {
            if (n%i==0)
            {
                sum+=i;
            }
        }

        if (sum==n)
        {
            printf("%d is a perfect number\n", n);
        }
        else
        {
            printf("%d is NOT a perfect number\n", n);
        }
    }
    else
    {
        printf("Input must be positive \n");
    }

    return 0;
}