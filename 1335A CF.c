#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    int a;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {    
        scanf("%d",&a);
        if (a==2)
         printf("0\n");
        else if( a%2==0)
         printf("%d\n",a/2-1);
         else 
          printf("%d\n",a/2);
    }

}