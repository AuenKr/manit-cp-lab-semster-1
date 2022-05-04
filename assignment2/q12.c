/*
Write a Menu driven program using ‘switch’ which has the following options:
(i) Positive or negative
(ii) odd or even.
*/

#include <stdio.h>

int main()
{
    int choice, num;
    printf("(i)Positive or negative\n(ii)Odd or Even\nEnter your choice(1/2):");
    scanf("%d", &choice);
    printf("Enter any number: ");
    scanf("%d", &num);
    switch (choice)
    {
    case 1:
        if (num > 0)
            printf("%d is positive", num);
        else if (num < 0)
            printf("%d is negative", num);
        else
            printf("%d is zero", num);
        break;
    case 2:
        if (num % 2 == 0)
            printf("%d is even", num);
        else
            printf("%d is odd", num);
        break;
    default:
        printf("Invalid Choice");
        break;
    }

    return 0;
}
