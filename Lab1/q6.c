/*
Write a C program to print ASCII value of a character.
Test data and expected output :
Enter a character : a
ASCII value of a is :97
*/

#include <stdio.h>

int main()
{
    char a;
    printf("Enter a character : ");
    scanf("%c",&a);
    printf("ASCII value of %c is :%d\n", a, a);
    return 0;
}
