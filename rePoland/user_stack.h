#ifndef _STACK_
#define _STACK_

struct user_stacks
{

    int top;
    char stacks[100];
};

typedef struct user_stacks user_stacks;

extern user_stacks gen;
extern user_stacks out;

//get top without deleting
char getTop(user_stacks * s);

//getTop and delete
char pop(user_stacks * s);

//push an element in it;
void push(user_stacks * s, char n);

#endif // _STACK_
