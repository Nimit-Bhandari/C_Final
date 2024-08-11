#define MAX 20
typedef struct stack
{
int arr[MAX];
int i;
}stack;
// void init(int *s)
// {
//     s>-i=-1;
// }
// void push(int *s,int a)
// {
// if(s->i==MAX-1)
// {
//     printf("Stack Overflow");
// }
// s->(arr[s->(i++)])=a;
// }
// int pop(int *s)
// {
//     int a=s->(arr[s->(--i)]);
//     return a;
// }