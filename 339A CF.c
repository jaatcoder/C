#include <stdio.h>
#include<string.h>
main()
{
char a[101],t;
int k,i,l;
gets(a);
l=strlen(a);
for(i=0;i<l;i+=2)
{
    for(k=i+2;k<l;k+=2)
    {
        if(a[i]>a[k]){
            t=a[i];a[i]=a[k];a[k]=t;
        }
 
 
    }
}
for(i=0;i<l;i++)
{
    printf("%c",a[i]);
}
    return 0;
}
