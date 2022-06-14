#include <stdio.h>
int main()
{
    float a, b;
    int c;
    a = 2.45;
    b = a + 2;
    printf("Enter an integer:");
    scanf("%d", &c);
    printf("%f %f %d\n", a, b, c);
    return 0;
}