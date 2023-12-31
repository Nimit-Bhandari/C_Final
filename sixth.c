#include<stdio.h>
int fact(int n);
int fact(int n) //func to find fact
{
    int fact=1;
    for(int i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
     int n,r;
     scanf("%d %d",&n,&r);
     float num = fact(n);
     float den = fact(n)*fact(n-r);
     float ans= num/den;
     printf("%f",ans);
    //float ab=fact(n-r);
    //printf("%f",ab);

   
}