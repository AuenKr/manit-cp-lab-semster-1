/*
Write a C program that accepts a non-negative integer from the keyboard and checks
whether the entered number is a palindrome number.
Test data and expected output:
Enter a non-negative integer:9
9 is a palindrome number
Enter a non-negative integer:246642
246642 is a palindrome number
Enter a non-negative integer:24312
24312 is NOT a palindrome number
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int reverse = 0, num;
    printf("Enter a non-negative number : ");
    scanf("%d", &num);
    if (num > 0)
    {
        int nod = 0;
        for (int temp = num; temp != 0;) // counting no of digits
        {
            nod += 1;
            temp /= 10;
        }

        for (int temp = num; temp != 0;) // calculating the reverse of num
        {
            int d;
            d = temp % 10;
            temp /= 10;
            reverse += d * pow(10, nod - 1);
            nod += -1;
        }
        if (num == reverse)
            printf("%d is a palindrome number", num);
        else
            printf("%d is not a palindrome number", num);
    }
    else
        printf("Invalid input");

    return 0;
}