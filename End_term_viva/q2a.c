#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the values of a and b\n");
    scanf("%d %d", &a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After saapping\n");
    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", b);
    return 0;
}