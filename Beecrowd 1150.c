#include<stdio.h>
int main()
{
    int i,a,b,count=0;

scanf("%d",&a);
while(1)
{
     scanf("%d",&b);
     if(a<b)
     break;
}
for(i=a;i<=b;i+=a)
{
    if(i>b && b%a!=0)
    break;
    else
count++;
}

printf("%d\n",count);
return 0;
}