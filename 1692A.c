#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        int count=0;
        if(a<b)
        count++;
        if (a<c)
        count++;
        if (a<d)
        count++;
         printf("%d\n",count);
    }
   
}