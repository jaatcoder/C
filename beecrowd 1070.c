#include <stdio.h>
 
int main() {
 
    int i,in;
    scanf("%d",&in);
    for(i=in;i<=in+12;i++)
    {
        if(i%2!=0)
    printf("%d\n",i);
    }
    return 0;
}