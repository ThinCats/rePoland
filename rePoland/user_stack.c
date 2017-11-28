
#include "user_stack.h"
#include<stdio.h>

user_stacks gen = {0};

//get top without deleting
char getTop(user_stacks * s)
{
    if(s->top == 0)
        return '\0';

    else
        return s->stacks[s->top-1];
}

//getTop and delete
char pop(user_stacks * s)
{
    if(s->top==0)
        return '\0';
    else
    {
        return s->stacks[s->top-1];
        s->top--;
    }
}

//push an element in it;
void push(user_stacks * s, char n)
{
    s->stacks[s->top] = n;
    s->top++;
}
