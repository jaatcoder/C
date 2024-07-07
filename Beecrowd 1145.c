#include<stdio.h>
int main()
{

int i,z,n,m;
scanf("%d %d",&n,&m);
for(z=1;z<=m;z++)
{  
    {
   
    if (z%n==0)
   printf("%d\n",z); 
   else
    printf("%d ",z);
    } 
}
return 0;
}