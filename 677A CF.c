#include<stdio.h>
int main()
{
    int a,b,c,count=0;
    scanf("%d %d",&a,&b);
    for (int i=1;i<=a;i++)
    {
        scanf("%d",&c);
        if (c>b)
        count+=2;
        if (c<=b)
        count++;
    }
    printf("%d",count);
    return 0;
}