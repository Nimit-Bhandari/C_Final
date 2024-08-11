#include<stdio.h>
int main()
{
    enum Company{Google,Facebook,Xerox,Yahoo,Ebay,Microsoft};
    enum Company a1,a2,a3;
    a1=Xerox;
    a2=Google;
    a3=Ebay;
    printf("%d\n%d\n%d",a1,a2,a3);



}