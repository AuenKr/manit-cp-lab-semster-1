/*
Write a program which calculates nCr .
*/

#include <math.h>
#include <stdio.h>

int fact(int n)
{
    int f=1;
    if (n>0)
    {
        while (n>0)
        {
            f*=n;
            n--;
        }
    }
    return f;
}

int main()
{
    int n, r, value;
    printf("Enter the the value of n and r in nCr respectively : ");
    scanf("%d %d", &n, &r);

    value=fact(n)/(fact(n-r)*fact(r));
    printf("Value of %dC%d is %d\n", n, r, value);
    return 0;
    
}