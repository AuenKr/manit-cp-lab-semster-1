/*
Write a program to take inputs between the range 10 to 50. Numbers not in range should be ignored.
Count the valid numbers and total numbers input.
Program stops when -1 is the input
*/
#include <stdio.h>

int main()
{
    int count = 0, i = 1;
    while (i != -1)
    {
        printf("Enter number:");
        scanf("%d", &i);
        if (i >= 10 && i <= 50)
            count += 1;
    }
    printf("Number of entered number b/w 10 and 50 = %d", count);
    return 0;
}
