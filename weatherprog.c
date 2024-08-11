#include<stdio.h>

float avgyear(float a[][7], int v)
{
    float avg;
    float sum=0;
    for(int j=1;j<7;j++)
    {
    sum += a[v][j];
    }
    avg=sum/6;
    return avg;

}
int main()
{
  float arr[5][7];
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<7;j++)
    {
        scanf("%f",&arr[i][j]);
        
    }
  }  
float outarr[5][2];
for(int i=0;i<5;i++)
{
 outarr[i][0]=arr[i][0];
 outarr[i][1] = avgyear(arr,i);
}

float totyr=0;
for(int i=0;i<5;i++)
{
  totyr += outarr[i][1];
}
totyr=totyr/5;

float mnthavg=0;
int i=0;
//float mnthar[6];
//int c=0;
printf("JAN  FEB  MAR  APR  MAY\n");
for(int j=1;j<7;j++)
{ 
  for(i=0,mnthavg=0;i<5;i++)
  {
    mnthavg +=arr[i][j];
  }
  //mnthavg = mnthavg/5;
  //mnthar[c]=mnthavg;
  //c++;  
  //mnthavg=0;
  //printf("mth avg %f\n",mnthavg);
  float prb=mnthavg/5.0;
  printf("%.2f  ",prb);
}

// for(int i=0;i<5;i++)
// {
//     for (int j = 0; j < 2; j++)
//     {
//         printf("%.2f    ",outarr[i][j]);
//     }
//    printf("\n");
// }

//printf("Yearly avg %.2f\n",totyr);

// printf("AVG arr\n");
// for(int i=0;i<6;i++)
// {
//     printf("%.2f  ",mnthar[i]);
// }



}