#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the side\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
int l;
if(a>b)
{
    if(a>c)
    l=a;
    else
    l=c;
}
else if(b>c)
l=b;
else l=c;
int sq=0;
int sum=0;
int *ap=&a;
int *bp=&b;
int *cp=&c;
int ar[3]={a,b,c};
for(int i=0;i<3;i++)
{
    if(ar[i]==l)
    {
        continue;
    }    
    else{
    sq=(ar[i]*ar[i]);
    }
    sum=sq+sum;

}
int sq2=l*l;
if(sum==sq2)
printf("yes");
else printf("no");
}