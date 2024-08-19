#include<stdio.h>
struct book{
char bt[20];
int bp;
int bpage;
};
void output(struct book b[],int i);
int main()
{
    struct book b1[3];
    for(int i=0;i<3;i++)
    {
        scanf("%s",&b1[i].bt);
        scanf("%d",&b1[i].bp);
        scanf("%d",&b1[i].bpage);
    }
output(b1,3);     
}
void output(struct book b[],int i)
{
    for(int a=1;a<=i;a++)
    {
        printf("%d book detail\n",a);
        printf("%s %d %d\n",b[a-1].bt,b[a-1].bp,b[a-1].bpage);
    }
}