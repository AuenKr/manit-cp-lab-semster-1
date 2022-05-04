/*
A library charges a fine for every book returned late. For first 5 days the fine is 50 paise,
for 6-10 days fine is one rupee and above 10 days fine is 5 rupees. If you return the book after 30 days your membership will be cancelled.
Write a program to accept the number of days the member is late to return the book and display the fine or the appropriate message.
*/

#include <stdio.h>

int main()
{
    int nods;
    printf("Enter number of days late submitted : ");
    scanf("%d", &nods);
    if (nods <= 5)
        printf("late fee = Rs.%.2f", .5 * nods);
    else if (nods <= 10)
        printf("late fee = Rs.%.2f", .5 * 5 + (nods - 5));
    else if (nods <= 30)
        printf("late fee = Rs.%.2f", .5 * 5 + 5 + 5 * (nods - 10));
    else
        printf("Your membership will be cancelled.");

    return 0;
}