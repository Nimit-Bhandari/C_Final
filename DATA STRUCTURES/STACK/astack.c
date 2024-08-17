#include"C:\Users\nimla\OneDrive\Desktop\Codin'23-24\C programs\DATA STRUCTURES\stack.h"
void push(stack *s,int no)
{
    if(s->i==MAX-1)
    {
        printf("STACK OVERFLOW");
    }
    s->arr[s->i++] = no;
}
int pop(stack *s)
{  if(s->i==-1)
{
    printf("UNDERFLOW");
}
   return s->arr[--s->i];
}
void init(stack *s)
{
    s->i=0;
}
int isEmp(stack *s)
{
    if(s->i==-1)
    return 1;
    else return 0;
}