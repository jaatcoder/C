#include <stdio.h>
 
int main() {
 
    int i,b,fact=1;
    scanf("%d",&b);
    for(i=b;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("%d\n",fact);
    return 0;
}