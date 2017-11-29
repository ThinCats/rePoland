#include "generator.h"

char * rePolandExp(char * in)
{
    clearStack(&gen);

    int i = 0;
    int j = 0;


    for(;in[i] != '\0';i++)
    {

        //Space
        if(in[i] == ' ')
            continue;

        //Num:
        if(in[i] >= '0' && in[i] <= '9')
        {

            exp[j++] = in[i];
            continue;
        }

        //bracket:
        if(in[i] == ')')
        {
            for(;getTop(&gen) != '(';)
                {
                    exp[j++] = ' ';
                    exp[j++] = pop(&gen);
                }


            pop(&gen);
            continue;
        }

        //Operators:
        switch(in[i])
        {
        case '(':
            push(&gen, in[i]);
            break;

        case '*':
        case '/':
            exp[j++] = ' ';
            push(&gen, in[i]);
            break;

        case '+':
        case '-':
            if(getTop(&gen) == '*' ||getTop(&gen) == '/')
            {
                for(;gen.top > 0 && getTop(&gen) != '(';)
                {

                    exp[j++] = ' ';
                    exp[j++] = pop(&gen);

                }

                push(&gen, in[i]);
                exp[j++] = ' ';


            }

            else
            {
                exp[j++] = ' ';
                push(&gen, in[i]);
            }
            break;


        }

    }

    //Empty
    for(;gen.top > 0;)
    {

        exp[j++] = ' ';
        exp[j++] = pop(&gen);

    }

    exp[j] = '\0';

    return exp;
}
