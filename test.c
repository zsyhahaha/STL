#include "stdio.h"
void Conv_Same( double x[], int xMax, double y[], int yMax, double result[])   //xMax,yMax是数组的长度
{     int i=0, k=0,j=0,resultMax;
    resultMax = xMax + yMax;
    double  REsult[resultMax];
    // memset(result, 0, (xMax)*sizeof(double));
    j=yMax/2;

    for(i=0; i<xMax; i++)
    {
        for(k=0; k<yMax; k++)
        {
            REsult[i+k] += x[i] * y[k];
        }
    }

    for(int m=0;m<xMax;m++)	 //抽取中心代码：
    {
        result[m]=REsult[m+j];
    }
}
int main()
{
    double a[10];
    int i;
    double u[]={1,2,3,4,5,6,7,8,9,0};
    double v[]={9,8,7,6,5,4,3,2};
    Conv_Same(u,10,v,8,a);
    for(i=0;i<10;i++)
    {
        printf("No %d is %f      \r\n",i,a[i]);

    }
    printf("ok\r\n");
}

