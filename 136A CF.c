#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d",&b);
    int ar[b],res[b];
    for (i=1;i<=b;i++)
    scanf("%d",&ar[i]);
    for (i=1;i<=b;i++)
    {
        res[ar[i]]=i;
    }
    for (i=1;i<=b;i++)
    printf("%d ",res[i]);
}