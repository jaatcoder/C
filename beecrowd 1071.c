#include<stdio.h>
int main()
{
    int i,a,b,sum=0;
    scanf("%d %d",&a,&b);
    for(i=b;i<a;i++)
    {if (i%2!=0)
    sum=sum+i;
 }
 printf("%d\n",sum);
 return 0;
}