#include <stdio.h>


int main()
{
    int a=15,b=10;
    int *p=&a;
int *q=&b;
printf("%d %d %d %d %d",(*p)++,--(*q),*p+(*q)--,++(*q)-*p,--(*q)-++(*p));
    return 0;
}