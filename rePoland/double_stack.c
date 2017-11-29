
#include "double_stack.h"

double_stacks out = {0};

//get top without deleting
double dgetTop(double_stacks * s)
{
    if(s->top == 0)
        return '\0';

    else
        return s->stacks[s->top-1];
}

//getTop and delete
double dpop(double_stacks * s)
{
    if(s->top == 0)
        return '\0';
    else
    {
        s->top--;
        return s->stacks[s->top];

    }
}

//push an element in it;
void dpush(double_stacks * s, double n)
{
    s->stacks[s->top] = n;
    s->top++;
}

//Clear
void dclearStack(double_stacks * s)
{
    s->top = 0;
}
