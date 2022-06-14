#include <stdio.h>
#include <math.h>

int main()
{
    int num=5;
    for (int i=1; i<=num ; i++)
    {
        for (int j=1; j<=num; j++)
        {
            int t;
            t=pow(i, j)*j;                     // t= pow(i, j)*j
            printf("%5d", t);
        }
        printf("\n");
    }
    return 0;
}