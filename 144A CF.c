#include<stdio.h>
int main()
{
    int n,i,sum=0,a,mn=100,mx=0,mxa,mna;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a>mx)  {mx=a;mxa=i;}
        if(a<=mn) {mn=a;mna=i;}
    }
    sum=mxa+n-mna-1;
    if(mxa>mna) sum-=1;
    printf("%d %d %d",sum,mna,mxa);
}
