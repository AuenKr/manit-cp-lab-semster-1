#include <stdio.h>

int main()
{
    int even=0, odd=0, temp;

    for (int i = 1; i <=10; i++)
    {
        printf("Enter %d number : ", i);
        scanf("%d", &temp);

        if (temp>0)
        {
            if (temp%2==0)
            {
                even+=1;
            }

            else if (temp%2!=0)
            {
                odd+=1;
            }
        }
    }

    printf("Even number input=%d\n", even);
    printf("Odd number input=%d\n", odd);
    
    return 0;
}