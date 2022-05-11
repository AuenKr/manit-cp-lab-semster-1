/*
The policy followed by a company to process customer orders is given by the following rules:
(a) If a customer order is less than or equal to that in stock and has credit is OK, supply has requirement.
(b) If has credit is not OK do not supply. Send him intimation.
(c) If has credit is Ok but the item in stock is less than has order, supply what is in stock. Intimate to him data the balance will be shipped.
Write a C program to implement the company policy
*/
#include <stdio.h>

int main()
{
    char credit;
    int T = 150, N;
    printf("Is credit sufficient(Y/N)\n");
    scanf("%c", &credit);
    printf("Enter number of stock to buy :");
    scanf("%d", &N);
    if (credit == 'Y' || credit == 'y')
    {
        if (T >= N)
            printf("Thank you\nyour order is placed.\n");
        else if (T < N)
            printf("We have placed %d order of stock , rest %d will we paced asap.\n", T, N - T);
    }
    else if (credit == 'N' || credit == 'n')
        printf("Insufficient credit to place stock order.\n");
    else
    {
        printf("Select only from Y/N.\n");
    }

    return 0;
}
