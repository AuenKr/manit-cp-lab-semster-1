// Write a C program to compute compound interest
//  CI = p- p*(1 + (r/100)/n)**(n*t)

#include <stdio.h>
#include <math.h>

int main()
{
    float P, R, T, N, CI;

    printf("Enter Value of P:");
    scanf("%f", &P);
    printf("Enter Value of R:");
    scanf("%f", &R);
    printf("Enter Value of T(In years):");
    scanf("%f", &T);
    printf("Enter Value of N(No. of times interst given in year):");
    scanf("%f", &N);
    CI = P * pow((1 + (R / 100) / N), N * T) - P;
    printf("Compound Interest for above given data is %.2f\n", CI);
    return 0;
}
