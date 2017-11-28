#include <stdio.h>
#include "user_stack.h"

int main(void)
{
    gen.stacks[0] = '*';
    gen.stacks[1] = '/';
    gen.top = 2;

    char c = pop(&gen);
    putchar(c);
    printf("%d\n", gen.top);

    c = getTop(&gen);
    putchar(c);
    printf("%d\n", gen.top);

    push(&gen, '&');
    c = getTop(&gen);
    putchar(c);
    printf("%d\n", gen.top);
}
