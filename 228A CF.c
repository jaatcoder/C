#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,l,count=0,a,b,c,d;
    char st[1000];
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (a==b|| a==c|| a==d)
    count++;
    if(b==c ||b==d)
    count++;
    if(c==d)
    count++;
   

        
    
    printf("%d\n",count);
}