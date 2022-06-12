/*

Write a C program that prints out the prime numbers between 1 and 100. The output should be such that each row contains a maximum of 7 prime numbers.
Expected output:
The prime numbers between 1 and 100 are:
2 3 5 7 11 13 17
19 23 29 31 37 41 43
47 53 59 61 67 71 73
79 83 89 97

*/

#include <stdio.h>

int main()
{
    int n=100;
    for (int i=2; i<=n; i++)
    {
        int count=0;
        for (int j=2; j<i; j++)
        {
            if (i%j==0)
            {
                count+=1;
                break;
            }
        }
        if (count==0)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}