/*
 Given the coordinates (x, y) of a center of a circle and it’s radius, 
 write a program which will determine whether a point lies inside the circle, on the circle or outside the circle
*/


#include <stdio.h>
#include <math.h>

int main()
{
    float z, x1, y1, x, y, r;
    printf("(X-X1)^2 - (Y-y1)^2 = R^2\n");

    x1 = 5;
    y1 = 6;
    r = 5; // Here, Center of circle is (5,6) and radius = 5

    printf("Here,\nCenter of circle is (%.2f, %.2f)\nradius = %.2f\n", x1, y1, r);
    printf("Enter X-coordinator : ");
    scanf("%f", &x);
    printf("Enter Y-coordinator : ");
    scanf("%f", &y);

    z = pow((x - x1), 2) + pow((y - y1), 2) - pow(r, 2);

    if (z > 0)
        printf("Point lies outside the circle\n");
    else if (z < 0)
        printf("Point lies inside the circle\n");
    else
        printf("Point lies on the circle\n");
    return 0;
}
