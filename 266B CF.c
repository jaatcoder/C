#include<stdio.h>
#include<string.h>
int main()
{
    int c,n,t,i;

    scanf("%d %d",&n,&t);
    char a[n];
    scanf("%s",&a);
    for(int j=1;j<=t;j++)
    {
    for(i=0;i<n;i++)
    {
        if (a[i]=='B' && a[i+1]=='G')
        {
            c=a[i];
            a[i]=a[i+1];
            a[i+1]=c;
        i++;
        }
    
    
    }
    }
    printf("%s",a);

}