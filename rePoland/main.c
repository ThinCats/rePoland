#include <stdio.h>
#include "generator.h"

int main(void)
{
    printf("Please input the expressions:(Like 4 * (3 - 2))\n");
    char in[100];
    gets(in);

    char *exp1 = rePolandExp(in);

    //Output:
    printf("\nThe rePoland expression is:\n%s\n", exp1);

    //Calculate:
    //printf("\nThe result is: %f\n");

}
