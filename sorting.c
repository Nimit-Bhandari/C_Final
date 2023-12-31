#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=1;i<n;i++)
    {
        while(ar[i-1]>ar[i])
        {
        int temp; 
        temp=ar[i-1];
        //printf("%d\n",temp);
        ar[i-1]=ar[i];
        ar[i]=temp;
        }
   }
   for (int i = 0; i < n; i++)
   {
    /* code */
    printf("%d",ar[i]);
   }
   




}