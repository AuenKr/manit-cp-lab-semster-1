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

#include <math.h>

#include <stdio.h>

int NTB(int num)
{
    int bn[5], bn2[5], r, q, i=0;
    while (num>=0)
    {
        q=num/2;
        r=num%2;
        bn[i]=r;
        num=q;
        i++;
        printf("%s", bn[i]);
    }
    
}

int main()
{
   // int bn[], i;
    NTB(2);
    return 0;
}