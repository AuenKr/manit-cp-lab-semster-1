/*
Write a program to find next prime palindrome.
A user will enter a number ‘n’ and we have to find a number greater than ‘n’ which is a prime as well as palindrome.
For example, if input is 7 than next number is 11, which is prime as well as palindrome.
*/

#include <stdio.h>
#include <math.h>

int prime(int n)
{
    int i = 2;

    for (; i < n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }

    if (i == n)
    {
        return 1;
    }
    return 0;
}

int palli(int n)
{
    int rev=0, nodigit = 0, temp = n;

    while (temp > 0)
    {
        temp = temp / 10;
        nodigit++;
    }

    temp = n;

    while (temp > 0)
    {
        rev += (temp % 10) * pow(10, nodigit - 1);
        temp = temp / 10;
        nodigit--;
    }
    
    if (n == rev)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n, v = 1;

    printf("Enter a number : ");
    scanf("%d", &n);
    n+=1;
    for (int v = 1; v == 1; n++)
    {
        if (prime(n))
        {
            if (palli(n))
            {
                printf("%d", n);
                v=0;
            }
        }
    }

    return 0;
}