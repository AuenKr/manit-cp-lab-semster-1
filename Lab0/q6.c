// Write a c program to convert temperature from celsius to Fahrenheit and vice versa

#include <stdio.h>

int main()
{
    float F, C;
    int choice;
    printf("1.Celsius to Fahrenheit\n");
    printf("2.Fahrenheit to Celcies\n");
    printf("What do you want(1/2)\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter temp in Celsius:");
        scanf("%f", &C);
        F = (9 * C) / 5 + 32;
        printf("Temp %.2f in Celsius = %.2f Fahrenheit\n", F, C);
    }
    else if (choice == 2)
    {
        printf("Enter temp in Fahrenheit:");
        scanf("%f", &F);
        C = ((F - 32) / 9) * 5;
        printf("Temp %.2f in farenheit = %.2f Centigrade\n", F, C);
    }
    else
    {
        printf("Invalid Choice\n");
    }
    return 0;
}
