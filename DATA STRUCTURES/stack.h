#define MAX 10
typedef struct stack
{
    int arr[MAX];
    int i;
}stack;
/* here in header file onl func will be declared and not defined(idhr sirf declare hoga explain nhi)*/

void push(stack *s,int no);
int pop(stack *s);
void init(stack *s);
int isEmp(stack *s);
