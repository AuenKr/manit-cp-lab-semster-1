/*
Write a C program that accepts 4 real numbers from the keyboard and prints out the difference (using 4-decimal places)
of the maximum and minimum values of these numbers.
Test data and expected output:
Enter four numbers: -1.5 2 7.5 11.2 Difference is 12.7000
*/

#include <stdio.h>

int main()
{
    float n1, n2, n3, n4, max, mim;
    printf("Entered four numbers : ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    if (n1 >= n2 && n1 >= n3 && n1 >= n4)
        max = n1;
    else if (n2 >= n3 && n2 >= n4)
        max = n2;
    else if (n3 >= n4)
        max = n3;
    else
        max = n4;

    if (n1 <= n2 && n1 <= n3 && n1 <= n4)
        mim = n1;
    else if (n2 <= n3 && n2 <= n4)
        mim = n2;
    else if (n3 <= n4)
        mim = n3;
    else
        mim = n4;

    printf("Difference ia %.4f", max - mim);

    return 0;
}