/*
Write a C program to generate the first n terms of Fibonacci sequence.
Expected output:
Enter total fibonacci number - 5
0 1 1 2 3
*/

#include <stdio.h>

int main()
{
    int n, count, i = 1, ib = 0, temp;
    printf("Enter total fibonacci number - ");
    scanf("%d", &n);

    for (; count <= n;)
    {
        printf("%d  ", ib);
        temp = ib;
        ib = i;
        i += temp;
        count += 1;
    }
    return 0;
}