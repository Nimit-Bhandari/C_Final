#include"C:\Users\nimla\OneDrive\Desktop\Codin'23-24\C programs\DATA STRUCTURES\QUEUE\queue.h"
//#include"C:\Users\nimla\OneDrive\Desktop\Codin'23-24\C programs\DATA STRUCTURES\QUEUE\queue.c"
#include<stdio.h>
int main()
{   
    queue q;
    q.i=-1;
    push(&q,20);
    push(&q,30);
    while(q.i!=-1){
    printf("%d\n",pop(&q));//uhushd
    //printf("%d",pop(&q));
    }
}