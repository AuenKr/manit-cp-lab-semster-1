/*
Print the maximum value of an unsigned int using One’s Compliment (~) Operator in C.
*/

#include <stdio.h>

int main()
{

    unsigned int max_val;
    max_val = 0;

    // one's compliment

    max_val = ~max_val;
    printf("max_val of\nIn Decimal value: %u\nIn Hexadecimal value: %x\n", max_val, max_val);

    return 0;

}