#include"C:\Users\nimla\OneDrive\Desktop\Codin'23-24\C programs\DATA STRUCTURES\QUEUE\queue.h"
void push(queue *q ,int el)
{
    for(int l= q->i;l>=0;l--)
    {
        q->arr[l+1]=q->arr[l];
    }
    q->i++;
    q->arr[0]=el;
}
int pop(queue *q)
{
    return q->arr[q->i--]; 
}