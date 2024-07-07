#include<stdio.h>
int main()
{
    int a,i,p,q,count=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
            scanf("%d %d",&p,&q);
            if(q-p>=2)
            {
            count++;
            }
    }
    printf("%d\n",count);
}