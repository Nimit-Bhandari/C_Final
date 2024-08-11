#include<stdio.h>
struct emp
{
    char name[20];
    int hiredate;
    float sal;
};
int main()
{
    
   struct emp e1={"Ram",20609,35000};
   int a;
   char s[20];
   float sal;
   scanf("%d %s %f",&a,s,&sal);
   struct emp e2={s,a,sal};
   

}