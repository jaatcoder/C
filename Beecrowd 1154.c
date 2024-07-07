#include<stdio.h>
int main()
{
    int a,sum=0,count=0;
    float  avg;
    while(1)
    {
        scanf("%d",&a);
        if(a<0)
        {
        break;
        }
        sum=sum+a;
        count++;
    }
    printf("%.2f\n",(float)sum/count);
}