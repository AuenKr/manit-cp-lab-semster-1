/*
Write a C program to find the sum of individual digits of a 3 digit number.
Expected output:
Enter a three digit number : 3467
Invalid number
Enter a 3 digit number : 346
Sum of individual digits of the number 346 is : 13
*/

#include <stdio.h>

int SUD(int n)
{

}
int main()
{
    int n, a, b, c;
    printf("Enter a 3 digit number : ");
    scanf("%d",&n);
    if (n/1000 !=0)
        printf("Invalid number");
    else
    {
        a=n/100;
        b=(n%100)/10;
        c=n%10;
        printf("Sum of individual figits of the number %d is : %d", n, a+b+c);
    }
    return 0;
}