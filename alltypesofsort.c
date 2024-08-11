#include<stdio.h>
int main()
{
    int arr[5];
    printf("hi\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    //bubble sort 
    // for(int i=4;i>0;i--)
    // {
    //     for(int j=0;j<i;j++)
    //     {
    //         if(arr[j]>arr[j+1])
    //         {
    //             int temp = arr[j];
    //             arr[j]=arr[j+1];
    //             arr[j+1]=temp;
    //         }
    //         else continue;
    //     }
    // }

// selection sort 

for(int i=0;i<5;i++)
{
    int m=arr[i];
    for(int j=i;j<5;j++)
    {
        if(arr[j]<m)
        {
            m=arr[j];
           int temp=arr[i];
            arr[i]=m;
            arr[j]=temp;
        }

    }
}











    for(int i=0;i<5;i++)
    {
        printf("%d,",arr[i]);
    }
}