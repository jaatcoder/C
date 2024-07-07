#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,count=0;
    scanf("%d",&a);
    int c[a];
    for (b=0;b<a;b++)
    {
        scanf("%d",&c[b]);
        if (c[b]==1)
        count++;
    }
    if (count>0)
    printf("HARD\n");
    else
    printf("EASY");
}