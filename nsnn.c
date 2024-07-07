#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && c<b)//1
    printf("%d",a-c);
    if(b>a && c<a)//2
    printf("%d",b-c);
    if(b>c && a<c)//3
    printf("%d",(b-a));
    if(c>b&&a<b)//4
    printf("%d",(c-a));
    if(c>a && b<a)//5
    printf("%d",(c-b));
    if(a>c && b<c)
    printf("%d",(a-b));
} 