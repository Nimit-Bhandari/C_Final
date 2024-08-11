#include<stdio.h>
int main()
{
    float hr;
    scanf("%f",&hr);
    float tp;
    if(hr>40)
    {
    float rt=hr-40;
    float temp = 18*rt;
    tp = 40*12+temp;
    }
    else tp = 12*hr;
    float t=0;
    if(tp>300)
    {
        t = (300*15)/100; 
        float ntp = tp-300;
        if(ntp<=150)
        t = t + (ntp*20)/100;
        else{
        float nntp = ntp - 150;
        t += (150*20)/100;
        t = t + (25*nntp)/100;
        }
    }
    else t = (tp*15)/100;
    printf("%f",t);
    float ans = tp - t;
   printf("%f",ans);
    return 1;
}