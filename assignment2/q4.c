/*
WAP to compute the pension of an employee.
If the person is male.
Age >= 90 pension is 4000
Age >= 60 pension is 6000
Age < 60 pension is 0
if the person is female.
Age >= 90 pension is 3000
Age >= 60 pension is 5000
Age < 60 pension is 0.
*/

#include <stdio.h>

int main()
{
    int age;
    char sex;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("Are you male or felmale?(M/F)\n");
    scanf("%c", &sex);
    if (sex == 'M' || sex == 'm')
    {
        if (age >= 90)
            printf("Pension is 4000\n");
        else if (age >= 60)
            printf("Pension is 6000\n");
        else if (age < 60)
            printf("Pension is 0\n");
    }
    else if (sex == 'F' || sex == 'f')
    {
        if (age >= 90)
            printf("Pension is 3000\n");
        else if (age >= 60)
            printf("Pension is 5000\n");
        else if (age < 60)
            printf("Pension is 0\n");
    }
    else
    {
        printf("Please only select from M/F.\n");
    }
    return 0;
}
