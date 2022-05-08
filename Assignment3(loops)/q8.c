/*
Write a C program that asks the user to enter a positive integer n less than 10. If the user
enters an invalid input, the code repeats the command of asking the user for a positive
integer less than 10 until the input is correct. It then prints out the sum of the first n terms of
the series 14 + 24 + 44 + 74 + 114 +···.
Test data and expected output:
Enter a +ve integer less than 10: 0
Invalid input, enter again: 4
Sum of the 4 terms of the series is 2674
Enter a +ve integer less than 10: 11
Invalid input, enter again: 5
Sum of the 5 terms of the series is 17315
*/

#include <stdio.h>
#include <math.h>

int main()
{

    int n, sum = 0, temp = 0;
    printf("series is 1^4 , 2^4 , 4^4 , 7^4 , 11^24 ···+m^4\n");
    printf("Enter a +ve integer less than 10: ");
    scanf("%d", &n);
    while (n >= 10)
    {
        printf("Invalid input, enter again :");
        scanf("%d", &n);
    }

    for (int i = 1, count = 1; count <= n;)
    {
        sum += pow(i, 4);
        temp += 1;
        i += temp;
        count += 1;
    }
    printf("Sum of the series is %d", sum);

    return 0;
}