#include <stdio.h>

int main(void)
{
    int a = 123, b = -123, c = 12345;
    printf("%2d\n", c);                 //12345
    printf("%10.2d\n", c);              //_____12345
    printf("%-10.2d\n", c);             //12345_____
    printf("%-7d\n", a);                //123____
    printf("%07.2d\n", a);              //____123
    printf("%07d\n", a);                //0000123
    printf("%+0-9.4d\n", a);            //+0123
    printf("%+09.4d\n", a);             //____+0123
    printf("%+07d\n", a);               //__+0123
    printf("%+07.4d\n", a);             //__+0123
    printf("%+-07.4d\n", a);            //+0123__
    printf("%-08d\n", b);               //-123
    printf("%-08.2d\n", b);             //-123
    printf("%-8.4d\n", b);              //-0123
    
    return 0;
}