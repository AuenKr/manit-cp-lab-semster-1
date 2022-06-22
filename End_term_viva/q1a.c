#include <stdio.h>

int main()
{
    int array[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int large=array[0], small=array[0];

    printf("Array is\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", array[i]);
        if (large<array[i])
        {
            large=array[i];
        }

        if (small>array[i])
        {
            small=array[i];
        }
    }
    printf("\n");
    printf("Largest integer element of array is %d\n", large);
    printf("Smallest integer element of array is %d\n", small);
    return 0;
}