#include<stdio.h>
void selec(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int key = a[i];
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;

    }
}
void inser(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {   
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
    if(min!=i)
    {
        int temp =a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    }
}
void bubble(int a[],int n)
{
    for(int i=n;i>1;i--)
    {
        for(int j=0;j<i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
} 
int main()
{
   int arr[4];
    for(int i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    selec(arr,4);
    for(int i=0;i<4;i++)
    {
        printf("%d",arr[i]);
    }

}