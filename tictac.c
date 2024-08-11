#include<stdio.h>
int drawbo(char ar[9],int a,int f)
{
   if(f==1)
   {
    f=2;
  ar[a-1]='x';
   } 
 else if(f==2)
   {
    f=1;
  ar[a-1]='o';
}
//dipbo(arr);
return f;
}
void dipbo(char ar[9])
{
  for(int i=0;i<9;i++)
    {
        printf("%c | ",ar[i]);
        if(i==2||i==5) printf("\n");
    }  
}
int winfun(char ar[9])
{ 
 int a=0;
 for(int i=0;i<3;i++)
 {
    if(ar[i]=='x' && ar[i+3]=='x' && ar[i+6]=='x'){
        a=1;
        return a;
    }
    else if(ar[i]=='o' && ar[i+3]=='o' && ar[i+6]=='o')
    {
        a=2;
        return a;
    }
 }
 for(int i=0;i<9;i=i+3)
 {
    if(ar[i]=='x' && ar[i+1]=='x' && ar[i+2]=='x')
    {
    a=1;
    return a;
    }
    else if(ar[i]=='o' && ar[i+1]=='o' && ar[i+2]=='o') 
    {
    a=2;
    return a;
    }
 }
 if((ar[0]=='x' && ar[4]=='x' && ar[8]=='x') ||(ar[2]=='x' && ar[4]=='x' && ar[6]=='x'))
 {
    a=1;
    return a;
 }
 else if((ar[0]=='o' && ar[4]=='o' && ar[7]=='o') ||(ar[2]=='o' && ar[4]=='o' && ar[6]=='o'))
 {
    a=2;
    return a;   
 }
// if((ar[0]==ar[1]==ar[2]=='x')||(ar[3]==ar[4]==ar[5]=='x')||(ar[6]==ar[7]==ar[8]=='x')||(ar[0]==ar[4]==ar[8]=='x')||(ar[2]==ar[4]==ar[6]=='x')){
//     a=1;
//     return a;
// }
// else if ((ar[0]==ar[1]==ar[2]=='o')||(ar[3]==ar[4]==ar[5]=='o')||(ar[6]==ar[7]==ar[8]=='o')||(ar[0]==ar[4]==ar[8]=='o')||(ar[2]==ar[4]==ar[6]=='o'))
// {
//     a=2;
//     return a;
// }
return a;
}
int main()
{
    char arr[9]={'1','2','3','4','5','6','7','8','9'};
    int d; 
    int p=1;
    int cn=0;
    int a=0;
    //int are=0;
    dipbo(arr);
    printf("\nPlayer 1= 'x' and Player 2= 'o'\n ");
    while(a==0 && cn<9)
    {
    scanf("\n%d",&d);
    p=drawbo(arr,d,p);
    printf("\n");
    //p=are;
   a=winfun(arr);
    dipbo(arr);
    
    cn++;
    }
    //a=winfun(arr);
    if(cn==9 && a==0)
    {
        printf("It's a draw");
    }
    else if(a==1)
    {
        printf("Player 1 wins");
    }
    else if(a==2)
    {  
        printf("Player 2 wins");
    }




}