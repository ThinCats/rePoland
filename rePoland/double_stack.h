#ifndef _STACK_
#define _STACK_

struct double_stacks
{
    int top;
    double stacks[100];
};

typedef struct double_stacks double_stacks;

extern double_stacks out;


//get top without deleting
double dgetTop(double_stacks * s);

//getTop and delete
double dpop(double_stacks * s);

//push an element in it;
void dpush(double_stacks * s, double n);

void dclearStack(double_stacks * s);

#endif // _STACK_

