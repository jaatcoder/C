#include<stdio.h>
int main()
{
    int max,i,ar[5];
    for (i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    
    }
    max=ar[0];
    for(i=0;i<5;i++)
    {
        if(max<ar[i])
        max=ar[i];
    }
    printf("%d",max);
    return 0;
}