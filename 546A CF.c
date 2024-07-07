#include<stdio.h>
int main()
{
    int k,n,w,i=0,tb=0,m=0,ex;
    scanf("%d %d %d",&k,&n,&w);
    for (ex=1;ex<=w;ex++) 
    {
    i=ex*k+m;
    m=i;
    }

    if(i>n)
    tb=m-n;
    
    printf("%d\n",tb);
}