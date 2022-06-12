/*
(a) 
                
1        *          
2       * *         
3      * * *        
4     * * * *       
5    * * * * *
     123456789  
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