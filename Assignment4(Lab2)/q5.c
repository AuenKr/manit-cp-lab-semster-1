/*
Write a C program that accepts (from the keyboard) a positive integer less than 1000 and prints out the sum of the digits of this number.
Test data and expected output:
Enter a +ve no less than 1000: -4
Entered number is out of range
Enter a +ve no less than 1000: 1234
Entered number is out of range
Enter a +ve no less than 1000: 546
Sum of the digits of 546 is 15
*/

#include <stdio.h>

int main()
{
    int num, num1, sum = 0, temp;
    printf("Enter a +ve np less than 1000: ");
    scanf("%d", &num);
    num1 = num;
    if (num <= 1000 && num > 0)
    {
        for (; num > 0;)
        {
            temp = (num % 10);
            sum += temp;
            num /= 10;
        }
        printf("Sum of the digits of %d is %d", num1, sum);
    }
    else
        printf("Entered number is out of range");
    return 0;
}