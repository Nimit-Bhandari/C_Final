#include"C:\Users\nimla\OneDrive\Desktop\Codin'23-24\C programs\stack.h"
stack s;
void init(int *s)
{
    s->i=-1;
}
void push(int *s,int a)
{
if(s->i==MAX-1)
{
    printf("Stack Overflow");
}
s->(arr[s->i++])=a;
}
int pop(int *s)
{
    int a=s->(arr[s->--i]);
    return a;
}