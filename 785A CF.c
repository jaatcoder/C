#include<stdio.h>
int main()
{
    int i,n,count=0;
    char a[100],b[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",a);
        {
            if ( a[2]=='o' )
            count=count+20;
            if (a[2]=='b')
            count=count+6;
            if (a[2]=='d')
            count=count+12;
            if (a[1]=='e')
            count=count+4;
            if (a[4]=='h')
            count=count+8;
        }
    }
    printf("%d\n",count);
}