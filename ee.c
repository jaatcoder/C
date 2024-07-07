#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,n,sum,count=0;
    int a;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {    
        scanf("%d",&a);
        for(j=1,k=a-1;j<=n,k>0;j++,k--)
        {
            if (j>k )
            //printf("%d %d \n",j,k);
            count++;
        }
        printf("%d\n",count);
    }

}
