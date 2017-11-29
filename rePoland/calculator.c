#include "calculator.h"

double calTheExp(char * in)
{
    dclearStack(&out);

    int i = 0;
    double num = 0;
    int j = 0;
    double first;
    double sum = 0;

    for(;in[i] != '\0';i++)
    {
        //Space:
        if(in[i] == ' ')
            continue;

        //Num:
        if(in[i] >= '0' && in[i] <= '9')
        {
            for(j=0,num=0;in[i] != ' ';i++)
                num = num * 10 + in[i] - '0';
            //Ignore the char, use it as int
            dpush(&out, num);

            continue;
        }

        //operator:
        switch(in[i])
        {
        case '+':

            first = dpop(&out);
            dpush(&out, first + dpop(&out));
            break;

        case '-':
            first = dpop(&out);
            dpush(&out,  dpop(&out) - first);
            break;

        case '*':
            first = dpop(&out);
            dpush(&out, first * dpop(&out));
            break;

        case '/':
            first = dpop(&out);
            dpush(&out, dpop(&out) / first);
            break;
        }


    }

    //Output
    return dpop(&out);
}






