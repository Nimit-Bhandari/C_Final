#include<stdio.h>
int main()
{
  int a;
  float r=0;
  scanf("%d",&a);
  for(int i=1;i<=a;i++)
  {
    if(i%2==0)
    {
      r-=1.0/i;
    }else
      r+=1.0/i;
     }
printf("%f",r);
}
