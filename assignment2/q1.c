#include <stdio.h>

int main()
{
    int n;
    printf("Enter seat number\n");
    scanf("%d", &n);
    if (n >= 1 & n <= 72)
    {
        printf("Seat number vaild\n");
        if (n % 8 == 0)
            printf("Side upper berth\n");
        else if ((n + 1) % 8 == 0 || (n + 5) % 8 == 0)
            printf("side lower Berth\n");
        else if ((n + 7) % 8 == 0 || (n + 4) % 8 == 0)
            printf("Lower Berth\n");
        else if ((n + 6) % 8 == 0 || (n + 3) % 8 == 0)
            printf("Middle Berth\n");
        else if ((n + 5) % 8 == 0 || (n + 2) % 8 == 0)
            printf("Upper Berth\n");
    }
    else
        printf("Invalid seat number\n");
    return 0;
}