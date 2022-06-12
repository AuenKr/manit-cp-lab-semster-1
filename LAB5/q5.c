/*
Write a C program that accepts a non-negative integer from the keyboard and checks whether the entered number is a Armstrong number. (An n-digit number that is the sum of the n-th powers of its digits is called an Armstrong number)
Test data and expected output:
Enter a non-negative integer:-2 Input must be non-negative integer
Enter a non-negative integer:9 9 is an Armstrong number
Enter a non-negative integer:1634 1634 is an Armstrong number
Enter a non-negative integer:1636 1636 is NOT an Armstrong number
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n > 0)
    {
        int rev, temp = n, count = 0;

        for (; temp > 0; count++)               // Counting no of digits
        {
            temp = temp / 10;
        }
    
        for (int i = count-1; temp > 0; i--)      // calculating reverse of input number
        {
            rev = (temp % 10) * pow(10, i);
            temp = temp / 10;
        }

        if (rev == n)
        {
            printf("%d is an Armstrong number\n", n);
        }
        else
        {
            printf("%d is NOT an Armstrong number\n", n);
        }
    }
    else
    {
        printf("Input must be non-negative integer\n");
    }

    return 0;
}