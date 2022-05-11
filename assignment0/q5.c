//Write a program to input an integer, a float and a character from the user and print them

#include <stdio.h>

int main()
{
    int a;float b;char ch;
    printf("Enter value of integer\n");
    scanf("%d",&a);
    printf("Enter value of float\n");
    scanf("%f",&b);
    printf("Enter value of character\n");
    scanf("%c",&ch);
    printf("\nInteger = %d, Float = %f and Character = %c\n", a, b, ch);
    return 0;
}
