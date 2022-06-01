#include <stdio.h>

int main()
{
    int a = 4, b = 12, c = -3, res;

    res = a > b && a < c; // res = 0
    printf("res1=%d\n", res);

    res = a == c || a > b;    // res = 0
    printf("res2=%d\n", res);

    res = b>10 || b && c<0;     // res =1
    printf("res3=%d\n", res);

    res = (a/2.0==0.0&&b/2.0!=0.0);  // res=0
    printf("res4=%d\n", res);

    return 0;
}