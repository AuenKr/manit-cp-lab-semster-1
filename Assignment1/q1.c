/*
1. Write a C program that calculates the total interest income on amount Rupees 5
lakhs in a period of 10 years. Show the results for simple interest, compounded interest
when the compounding is done annually, semi-annually, quarterly, monthly and daily.
Assume that the interest rate is 3.5% per year.

Expected output:
Simple interest on Rs. 500000.00 in 10 years = Rs. 175000.00
Interest on Rs. 500000.00 in 10 years compounded annually = Rs. 205299.38
Interest on Rs. 500000.00 in 10 years compounded semi-annually = Rs. 207389.10
Interest on Rs. 500000.00 in 10 years compounded quarterly = Rs. 208454.42
Interest on Rs. 500000.00 in 10 years compounded monthly = Rs. 209172.41
Interest on Rs. 500000.00 in 10 years compounded daily = Rs. 209521.87
*/

#include <stdio.h>
#include <math.h>
int CI(int n)
{
    float p = 500000, r = 3.5, t = 10, ci;

    ci = p * (pow(1 + ((r / 100) / n), (n * t)));
    return ci;
}
int main()
{
    float p = 500000, r = 3.5, t = 10, si, ci1, ci2, ci3, ci4, ci5;
    si = p * r * t / 100;
    printf("Simple interest on Rs. 500000.00 in 10 years = Rs. %.2f\n", si);
    printf("Interest on Rs. 500000.00 in 10 years compounded annually = Rs. %.2f\n", CI(1) - p);
    printf("Interest on Rs. 500000.00 in 10 years compounded semi anually = Rs. %.2f\n", CI(20) - p);
    printf("Interest on Rs. 500000.00 in 10 years compounded quaterly = Rs. %.2f\n", CI(4) - p);
    printf("Interest on Rs. 500000.00 in 10 years compounded monthly = Rs. %.2f\n", CI(12) - p);
    printf("Interest on Rs. 500000.00 in 10 years compounded daily = Rs. %.2f\n", CI(365) - p);

    return 0;
}