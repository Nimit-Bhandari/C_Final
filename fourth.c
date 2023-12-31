#include<stdio.h>
int func(int n); //declaring a func 
int main()
{
int in;
scanf("%d",&in);
func(in);   // calling a func
}
int func(int n) // defining a func
{
    int m;
    for(int i=0;i<=10;i++)
    {
       m=n*i;
       printf("%d\n",m);
       //printf("hi");
    }
}