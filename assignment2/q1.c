<<<<<<< HEAD
/*
Given a railway seat number, the task is to check whether it is a valid seat number or not.
Also print its berth type i.e lower berth, middle berth, upper berth, side lower berth, side upper berth as per the figure below.
*/

=======
>>>>>>> e7e8a877618dce2164de7ceffff67c227216805a
#include <stdio.h>

int main()
{
    int n;
    printf("Enter seat number\n");
    scanf("%d", &n);
    if (n >= 1 & n <= 72)
    {
<<<<<<< HEAD
=======
        printf("Seat number vaild\n");
>>>>>>> e7e8a877618dce2164de7ceffff67c227216805a
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