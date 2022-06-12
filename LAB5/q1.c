/*
Write a C program that accepts a positive integer n less than 50 from the terminal and 
prints out the sum 1^4 +2^4 +4^4 +7^4 +11^4 +···+m^4, where m is less than or equal to n. 
If the input is outside the range, the program terminates with appropriate message.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum=0, temp=1;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i=1; i<=n; temp++)
    {
        sum+=pow(i, 4);
        i+=temp;
    }
    
    printf("Sum of the series upto is %d\n", sum);

    return 0;
}