/*
(c)

    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5

*/


#include <stdio.h>

int main()
{
    int r=5, c=9;
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
                printf("%d", i);
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