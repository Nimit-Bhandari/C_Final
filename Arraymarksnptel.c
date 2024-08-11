#include<stdio.h>
int totndmax(int a[][3]);
//int passf(int a[])
int main()
{
   int marks[4][3];
   for(int i=0;i<4;i++)
   {
    for(int j=0;j<3;j++)
    {
        scanf("%d",&marks[i][j]);
    }
   } 
   int array[4];
   array[]=totndmax(marks);
   //int fail=passf(marks);
   //printf("%d",res);
   }
int totndmax(int a[][3])
{
    int ar[4];
    for(int i=0;i<4;i++)
    {
    for(int j=0;j<3;j++)
    {
        ar[i]= a[i][j] + ar[i];
    }
    }
    return ar;
}