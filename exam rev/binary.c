#include<stdio.h>
int bin(int ar[],int n,int k)
{
    int mid=0;
    int beg=0,end=n-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(ar[mid]==k) {return mid;}
        if(ar[mid]>k)
        {   
            end =mid-1;
        }
        if(ar[mid]<k)
        {
            beg=mid+1;
        }
        
    }
    return -1;
    
}
int line(int ar[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if (ar[i]==k) return i;
    }
    return -1;
}
int main()
{
    int arr[4]={10,25,56,65};
    int b=bin(arr,4,56);
    int l=line(arr,4,56);
    printf("%d %d",b,l);
}