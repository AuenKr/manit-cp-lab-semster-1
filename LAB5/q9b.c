/*

(b)
    123456789
1       *
2     * * *
3   * * * * *
4     * * *
5       *

*/

#include <stdio.h>

int main()
{
    int r=3, c=9;

    // for printing till i=3
    for (int i=1; i<=r; i++)
    {
        for (int j=1; j<c-r+(2*i-1); j++)
        {
            while (j<=(c-r)-2*i)          // create initial spaces require of row
            {
                printf(" ");
                j++;
            }
            if (j%2==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    // for printing above i=3
    for (int i=1; i<=r-1; i++)
    {
        for (int j=1; j<=8-(2*i-1); j++)    
        {
            while (j<=2*i)                  // create initial spaces require of row
            {                               
                printf(" ");                
                j++;
            }
            if (j%2==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}