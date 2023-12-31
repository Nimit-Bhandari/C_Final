#include<stdio.h>
int leap(int n);
int leap(int n)
{
    //if(n%4==0)               //another way 
    //{
      //  if(n%100==0)
        //{
          //  if(n%400==0)
            //return 1;
            //else return 0;

        //} 
       // else
        //{
         //   return 1;
        //}
        
    //}
    //else 
    //return 0;
 if((n%100==0 && n%400==0) || (n%4==0 && n%100!=0) ) // the year should be divisible by 4 but if it is divisible by 100 then it should be divisible by 400 too.

 return 1;
 else return 0;
//  {                           // another way 
//     if(n%100==0 && n%400 ==0)
//     return 1;
//     else 
//     return 1;
// }
// else return 0;
}

int main()
{
    int  yr,m;
    
    printf("Enter the month:\n");
    scanf("%d",&m);
    printf("Enter the year:\n");
    scanf("%d",&yr);
    switch (m)
    {
    case 1: printf("31");
    break;
    case 2: if(leap(yr)==1) printf("29");
            else printf("28");
            break;
    case 3: printf("31");
    break;
    case 4: printf("30");
    break;
    case 5: printf("31");
    break;
    case 6: printf("30");
    break;
    case 7:printf("31");
    break;
    case 8:printf("31");
    break;
    case 9: printf("30");
    break;
    case 10: printf("31");
    break;
    case 11: printf("30");
    break;
    case 12: printf("31");
    break;
    default: printf("Enter a valid month");
     break;
    }
}