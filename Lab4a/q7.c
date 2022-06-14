/*
Write a C program to generate the first n terms of Fibonacci sequence. 
*/

#include <stdio.h>

int main()
{
    int n, count, i = 1, ib = 0, temp;
    printf("Enter total fibonacci number : ");
    scanf("%d", &n);

    for (; count <= n;)
    {
        printf("%d\t", ib);
        temp = ib;
        ib = i;
        i += temp;
        count += 1;
    }
    printf("\n");
    return 0;
}
