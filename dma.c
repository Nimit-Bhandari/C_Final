#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
scanf("%d",&n);
char *po = NULL;
po = (char*)malloc(n * sizeof(char));
if(po!= NULL)
{
printf("enter sen");
//scanf("%[^\n]",po);
scanf(" ");
gets(po);

printf("%s",po);
free(po);
}
else printf("error");


}