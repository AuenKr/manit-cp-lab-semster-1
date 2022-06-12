/*

(d)

      1
     2 3
    4 5 6
   7 8 9 10
11 12 13 14 15

*/


#include <stdio.h>

int main()
{
    int r=5, c=9, count=1;
    for (int i=1; i<=r; i++)
    {
        for (int j = 1; j <= c-r+i; j++)
        {
            while(j<c-(r+i-1))
            {
                printf(" ");
                j++;
            }
            if ((i+j)%2==0)
            {
                printf("%2d", count);
                count++;
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