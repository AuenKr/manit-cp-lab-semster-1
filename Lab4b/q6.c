/*
Write a C program to enter numbers until the user wants. At the end, display the total
number of positive, negative and zeros entered.
Expected output:
Enter a number : 6
Another number(Y/N)? Y
Enter a number: -3
Another number(Y/N)? Y
Enter a number: 0
Another number(Y/N)?Y
Enter a number: 9
Another number(Y/N)? N
Number of positive numbers: 2
Number of negative numbers: 1
Number of zeroes: 1
*/

#include <stdio.h>

int main()
{
    int num, p = 0, n = 0, z = 0;
    char ch='Y';
    while (ch =='Y' || ch =='y')
    {
        printf("\nEnter a number: ");
        scanf("%d", &num);
        if (num > 0)
            p += 1;
        else if (num < 0)
            n += 1;
        else
            z += 1;

        getchar();                              // to elimate \n as it is made is press enter
        printf("\nAnother number(Y/N)? - ");
        scanf("%c", &ch);
    }
    printf("Number of +ve number %d\n", p);
    printf("Number of -ve number %d\n", n);
    printf("Number of zero number %d\n", z);
    return 0;
}