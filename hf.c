#include<stdio.h>

int main()
{
    int x[10]={1,2,3,4,5,6,7,8,9,10},sum=0;
  
    int *p;
    p=x;
    int i=0;
    while(p<=&x[9])
    {
        sum=sum+*p;
        p++;

        printf("%d\n",*(x+i));
        i++;
    }
    printf("%d",sum);
    return 0;
}