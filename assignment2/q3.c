/*
For a 3-digit input number (integer) print the numbers in words, e.g., input: 123, output: one hundred twenty three.
Use the switch statement.
*/

#include <stdio.h>
void num(int d)
{
    switch (d)
    {
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    case 4:
        printf("Four");
        break;
    case 5:
        printf("Five");
        break;
    case 6:
        printf("Six");
        break;
    case 7:
        printf("Seven");
        break;
    case 8:
        printf("Eight");
        break;
    case 9:
        printf("Nine");
        break;
    default:
        break;
    }
}
void num2(int d)
{
    switch (d)
    {
    case 1:
        break;
    case 2:
        printf(" Twenty");
        break;
    case 3:
        printf(" thirty");
        break;
    case 4:
        printf(" Forty");
        break;
    case 5:
        printf(" Fifty");
        break;
    case 6:
        printf(" Sixty");
        break;
    case 7:
        printf(" Seventy");
        break;
    case 8:
        printf(" Eighty");
        break;
    case 9:
        printf(" Ninety");
        break;
    default:
        break;
    }
}

void num3(int d)
{
    switch (d)
    {
    case 0:
        printf(" Ten");
    case 1:
        printf(" Eleven");
    case 2:
        printf(" Twelve");
        break;
    case 3:
        printf(" Thirteen");
        break;
    case 4:
        printf(" Fouteen");
        break;
    case 5:
        printf(" Fifteen");
        break;
    case 6:
        printf(" Sixteen");
        break;
    case 7:
        printf(" Seventeen");
        break;
    case 8:
        printf(" Eighteen");
        break;
    case 9:
        printf(" Nineteen");
        break;
    default:
        break;
    }
}

int main()
{
    int n, d1, d2, d3;
    printf("Enter 3 digit number :");
    scanf("%d", &n);
    d1 = n / 100;
    d2 = n % 100 / 10;
    d3 = n % 10;
    num(d1);
    printf(" Hundred ");
    if (n % 100 >= 10 & n % 100 < 20)
    {
        num3(d3);
    }
    else
    {
        num2(d2);
        num(d3);
    }

    return 0;
}