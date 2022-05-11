/*
Write a C program that accepts coordinates of two-dimensional points A and B and prints out (using two decimal places) the distance between A and B. It also prints out the coordinates (using two decimal places) of the midpoint of A and B. Test data and expected output:
Enter coordinates of points A: -1 3
Enter coordinates of points B: 2 -1
Distance between A and B is 5.00
The coordinates of midpoint of A and B are (0.50,1.00)

*/
#include <math.h>
#include <stdio.h>

int main()
{
    float x1, x2, y1, y2, d, temp;

    printf("Enter coordinates of points A: ");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinates of points B: ");
    scanf("%f %f", &x2, &y2);
    temp = pow(x1 - x2, 2) + pow(y1 - y2, 2);
    d = pow(temp, .5);
    printf("Distance between A and B is %.2f\n", d);
    printf("The coordinates of midpoint A and B are (%.2f, %.2f)\n", (x1+x2)/2, (y1+y2)/2);
    
    return 0;
}