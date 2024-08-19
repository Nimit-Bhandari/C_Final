#include<stdio.h>
int palin(char ar[],int n)
{
   int i=0;
   int j=n-1;
    while(i<j)
    {
        if(ar[i]!=ar[j])
        return 0;
        i++;
        j--;
    }
return 1;
}
int fibo(n)
{
    if(n==0) return 0;
    else if(n==1) return 1;
    else {

        return fibo(n-1)+fibo(n-2);
    }
    

}
int main()
{
int a=5;
for(int i=0;i<5;i++)
{
    printf("%d",fibo(i));
}
}