#include<stdio.h>
int main()
{
    int a,b,i,n,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {  
        scanf("%d %d",&a,&b);
        int rem=a%b;
        if(rem==0)
        count=0;
        else count=b-rem;
         printf("%d\n",count);
    }
}