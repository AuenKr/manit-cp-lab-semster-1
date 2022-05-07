/*
A character is entered through keyboard. Write a C program to determine whether the character entered is a capital letter, a small case letter,
a digit or a special symbol using if-else and switch case. The following table shows the range of ASCII values for various characters.
Characters ASCII values
A – Z 65 – 90
a – z 97 – 122
0 – 9 48 – 57
Special symbols 0 – 47, 58 – 64, 91 – 96, 123 – 127
*/

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character :");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
        printf("Charactered entered is Capital letter");
    else if (ch >= 97 && ch <= 122)
        printf("Charactered entered is small letter");
    else if (ch >= 48 && ch <= 57)
        printf("Charactered entered is digit");
    else if ((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127))
        printf("Charactered entered is Special Symbol");
    return 0;
}
