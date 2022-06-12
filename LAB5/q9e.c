/*


(e)

    A
   B C
  D E F
 G H I J
K L M N O

*/


#include <stdio.h>

int main()
{
    int r=5, c=9;
    char ch='A';
    for (int i=1; i<=r; i++)
    {
        for (int j = 1; j <= c-5+i; j++)
        {
            while(j<c-(r+i-1))
            {
                printf(" ");
                j++;
            }
            if ((i+j)%2==0)
            {
                printf("%c", ch);
                ch++;
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