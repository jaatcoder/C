#include<stdio.h>
int main()
{
    int i,n,count=0;
    scanf("%d",&n);
    int ar[n],ar1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&ar[i],&ar1[i]);
    }
    for(i=0;i<n;i++)
    { for(int j=0;j<n;j++)
        if (ar[i]==ar1[j])
        count++;
    }
    printf("%d\n",count);
    return 0;
}