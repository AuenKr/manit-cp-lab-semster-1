#include <stdio.h>
#include <math.h>


int main()
{
    int dec, rev=0, temp;
    printf("Enter a posivite integer number which is less than 16 :");
    scanf("%d", &dec);

    temp=dec; 

    if (dec>0 && dec<=16)
    {
        
        for (int i=0 ;temp>0; i++)
        {
            rev+=(temp%2)*pow(10, i);
            temp=temp/2;
        }
        
        printf("%04d\n", rev);

    }
    return 0;
}