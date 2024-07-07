#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    while(x--)
    {

        int a,b;
        scanf("%d %d",&a,&b);
        int m=a>b?a:b;
        int n=a<b?a:b;
        printf("%d %d",m,n);
        if (m%n!=0)
        
        printf("%d\n",m*n);
        else
        printf("%d\n",m*2);
        
    }
}