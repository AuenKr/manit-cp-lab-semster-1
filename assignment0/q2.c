#include <stdio.h>

int main(void)
{
    int a = 123, b = -123, c = 12345;   //                  a=2                          output             explain
    printf("%2d\n", c);                 //12345             printf("%2d\n", c);         | 3|                here 2 denote 2 digit display with black spaces and digit counted from end
    printf("%10.2d\n", c);              //_____12345        printf("%10.2d\n", c);      |        02|        .2 denotes 2 digit display with black spaces
    printf("%-10.2d\n", c);             //12345_____        printf("%-10.2d\n", c);     |02        |        -ve sign denote digits counted from starting if not present black spaces are printed
    printf("%-7d\n", a);                //123____           printf("%-7d\n", a);        |2      |           above logic
    printf("%07.2d\n", a);              //____123           printf("%07.2d\n", a);      |     02|           07 means 7  
    printf("%07d\n", a);                //0000123           printf("%07d\n", a);        |      2|           above same
    printf("%+0-9.4d\n", a);            //+0123             printf("%+0-9.4d\n", a);    |+0002    |         + sign denotes to add + sige before printing digits and in counting no of digit it is also inclided in counting
    printf("%+09.4d\n", a);             //____+0123         printf("%+09.4d\n", a);     |    +0002|
    printf("%+07d\n", a);               //__+0123           printf("%+07d\n", a);       |     +2|
    printf("%+07.4d\n", a);             //__+0123           printf("%+07.4d\n", a);     |  +0002|
    printf("%+-07.4d\n", a);            //+0123__           printf("%+-07.4d\n", a);    |+0002  |           +0-7 means same as +-7 and vice versa and -ve sign denote digits counted from starting if not present black spaces are printed
    printf("%-08d\n", b);               //-123              printf("%-08d\n", b);       |2       |          
    printf("%-08.2d\n", b);             //-123              printf("%-08.2d\n", b);     |02      |
    printf("%-8.4d\n", b);              //-0123             printf("%-8.4d\n", b);      |0002    |
    
    return 0;
}