#include<stdio.h>
int main()
{
int x,j,n,m,a,ans;
int p[100];
scanf("%d%d",&n,&m);
for(x=0;x<m;x++)
{
scanf("%d",&p[x]);
}
for(x=0;x<m;x++)
{
for(j=x+1;j<m;j++)
{
if(p[x]>p[j])
{
a=p[j];
p[j]=p[x];
p[x]=a;
}
 
}
}
ans=p[n-1]-p[0];
for(x=0;x<=m-n;x++)
{
    if(p[n+x-1]-p[x]<ans)
    ans=p[n+x-1]-p[x];
}
printf("%d",ans);
 
 
 
}