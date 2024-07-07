#include<stdio.h>
int main()
{
    int i,n,sumodd=0,sumeve=0,res;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if (i%2!=0)
        sumodd=sumodd-i;
        if(i%2==0)
        sumeve=sumeve+i;
    }
    res=sumeve+sumodd;
    printf("%d\n",res);
}