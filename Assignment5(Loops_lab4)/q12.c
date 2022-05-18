/*
Write a C program that accepts a positive integer n and a real number x from the keyboard
and prints out the sum of the n terms of the series

sin(x) taylors series

Test data and expected output:
Enter the value of n & x:0 1.0
Number of terms must be +ve
Enter the value of n & x:5 0.5
Sum of the series at x=0.50 with 5 terms is 0.47943
*/

#include <stdio.h>
#include <math.h>

// fuction to find factorial
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main()
{
    int n;
    float x, sum = 0;
    printf("Enter the value of n & x:");
    scanf("%d %f", &n, &x);

    for (int i = 0; i <= n; i++)
    {
        float a;
        a = pow(-1, i) * pow(x, (2 * i + 1)) / (fact((2 * i + 1))); // each term calculated individually
        sum += a;
    }

    printf("Sum of the series at x=%.2f with %d term is %.5f\n", x, n, sum);
    return 0;
}
