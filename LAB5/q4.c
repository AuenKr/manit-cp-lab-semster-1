/*
Write a C program to find HCF and LCM of two numbers
*/

#include <stdio.h>

int no_factor(int n)
{
    int count=0;
    for (int i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n1, n2;
    printf("Enter two numbers :");
    scanf("%d %d", &n1, &n2);
    int s1=no_factor(n1), s2=no_factor(n2);
    int f1[s1], f2[s2];

    for (int i=1, j=0; i<=n1; i++)
    {
        if (n1%i==0)
        {
            f1[j]=i;
            j++;
        }
    }

    for (int i=1, j=0; i<=n2; i++)
    {
        if (n2%i==0)
        {
            f2[j]=i;
            j++;
        }
    }

    for (int i=0; i<s1; i++)
    {
        
    }
    

    
    return 0;
}