
#include<stdio.h>
int main()
{   
    int m,n;
    printf("Enter the no of input\n");
    scanf("%d %d",&m,&n);
    int a[m];
    int b[n];
    printf("Enter the first matrix\n");
    for(int i=0;i<m;i++)
    {
    scanf("%d",&a[i]); 
    }
    printf("Enter the sec matrix\n");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&b[i]); 
    }
    int l=0;
    int result[l];
    for(int i=0;i<m;i++)
    {
        if(a[i]==b[i]) result[i]=a[i];
        else 
        { 
          result[i]=a[i];    
        //printf("hi");
        // i++;
        // result[i]=a[i]; 
        // result[i+1]=b[i];
        // i--;
        }
        l++;
    }
    for(int i=0;i<l;i++)
    {
        printf("%d ",result[i]);
    }
    

    // int l=1;
    // int result[l];
    // {
    //     for(int i=0;i<=)
    // }

   // }
    // for(int i=0;i<m;i++)
    // {
    // printf("%d\n",a[i]); 
    // }


}