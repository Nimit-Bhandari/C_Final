#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    time_t t;
    srand((unsigned) time(&t));
    int rand_1=rand()%21;
    int in;
    for(int i=5;i>0;i--)
    {   printf("You have %d chance left\n",i);
        printf("Enter number\n",rand_1);
        scanf("%d",&in);
        if(in==rand_1)
        { 
            printf("congratulations");
            break;
        } 
        // else{
        // int ch = i-1;
        // printf("You have %d chance left\n",ch);}
    }
}