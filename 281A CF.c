#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char ar[1009];
    scanf("%s",&ar);

    if(ar[0]>='a' && ar[0]<='z')
    {
        ar[0]=ar[0]-32;
    }
    printf("%s\n",ar);

}