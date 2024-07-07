#include<stdio.h>
int main()
{
    int i,a,b;
    scanf("%d %d",&a,&b);
    for(i=0;i<b;i++)
    {
        if(a%10==0)
        {
            a=a/10;
        }
        else 
        a--;
    }
    printf("%d\n",a);
}