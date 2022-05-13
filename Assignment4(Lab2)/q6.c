/*
decimal number between 0 and 32 exclusive can be expressed in binary system as x4x3x2x1x0, where xi’s are either zero or one. Write a C program that accepts (from the terminal) a decimal number in the above range and prints out the equivalent binary representation with leading bit 1.
Test data and expected output:
Enter a +ve no less than 32: -5
Entered number is out of range
Enter a +ve no less than 32: 21
Binary equivalent of decimal number 21 is 10101
Enter a +ve no less than 32: 14
Binary equivalent of decimal number 14 is 1110
Enter a +ve no less than 32: 35
Entered number is out of range
*/

#include <stdio.h>
#include <math.h>

// Approach 1 : without using array

int DTB1(int d)
{
    int b = 0, r, q;
    q = d;

    // formed binary form in reverse direction
    for (int i = 0; i <= 4; i++)
    {
        r = q % 2;
        q = q / 2;
        b += r * pow(10, i);
    }

    printf("Binary equivalent of decimal number %d is %05d", d, b);
}

// Approach 2: using array
int DTB2(int d)
{
    int br[5], b[5], r, q;
    q = d;

    // formed binary form in reverse direction
    for (int i = 0; i <= 4; i++)
    {
        r = q % 2;
        q = q / 2;
        br[i] = r;
    }
    // make corret binary form

    for (int j = 0, i = 4; j <= 4 & i >= 0; j++, i--)
    {
        b[j] = br[i];
    }
    // printing each element of binary
    printf("Binary equivalent of decimal number %d is ", d);
    for (int j = 0; j <= 4; j++)
    {
        printf("%d", b[j]);
    }
}

int main()
{
    int num;
    printf("Enter a +ve no less than 32: ");
    scanf("%d", &num);
    if (num>0 && num<=32)
        DTB1(num);
    else
        printf("Entered number is out of range\n");
    return 0;
}