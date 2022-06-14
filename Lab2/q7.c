/*
A positive decimal fraction can be expressed in binary system as 0.x1x2x3x4···, where xi’s are either zero or one. Write a C program that accepts (from the keyboard) a positive decimal fraction a (0 < a < 1) and prints out at most first four bits of the equivalent binary representation. If the binary representation continues after four bits, then it appends the binary representation with ···.
Test data and expected output:
Enter a +ve decimal fraction less than 1: .875
Binary equivalent of 0.875000 is 0.111
Enter a +ve decimal fraction less than 1: -0.1
Entered number is not a +ve decimal fraction less than 1
Enter a +ve decimal fraction less than 1: 1.2
Entered number is not a +ve decimal fraction less than 1
Enter a +ve decimal fraction less than 1: 0.525
Binary equivalent of 0.525000 is 0.1000...

*/

#include <stdio.h>
#include <math.h>


int DTB1(float d)
{
    
    float bf=0, q=d;
    int r;

    for (int i = 0; i <= 4; i++)
    {
        r = (int)q % 2;
        bf += r * pow(10, i*(-1));
        q = q * 2;
    }

    printf("Binary equivalent of decimal number %f is %f\n", d, bf);
}

int main()
{
    float num;
    printf("Enter a +ve decimal fraction less than 1: ");
    scanf("%f", &num);
    if (num >= 0 && num <= 1)
        DTB1(num);
    else
        printf("Entered number is not a +ve decimal fraction less than 1\n");
  
    return 0;
}