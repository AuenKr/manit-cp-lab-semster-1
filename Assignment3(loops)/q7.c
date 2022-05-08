/*
Write a C program that accepts a positive integer n less than 50 from the terminal and
prints out the sum 1^4 + 2^4 + 4^4 + 7^4 + 11^24 +···+m^4, where m is less than or equal to n. If the
input is outside the range, the program terminates with appropriate message.
Test data and expected output:
Enter a +ve integer less than 50: 0 Invalid input
Enter a +ve integer less than 50: 39 Sum of the series is 2898549
Enter a +ve integer less than 50: 0 Invalid input
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum = 0, temp = 0;
    printf("series is 1^4 , 2^4 , 4^4 , 7^4 , 11^24 ···+m^4\n");
    printf("Enter a +ve integer less than 50: ");
    scanf("%d", &n);
    if (n <= 50 && n > 0)
    {
        for (int i = 1; i <= n;)
        {
            sum += pow(i, 4);
            temp += 1;
            i += temp;
        }
        printf("Sum of the series is %d", sum);
    }
    else
        printf("Invalid input");
    return 0;
}