#include<stdio.h>
int main()
{
    int n,tot=0;
    scanf("%d",&n);
    int coin[n+3];
     int max=0,temp;
    for (int i=0;i<n;i++)
    {
        scanf("%d",&coin[i]);
        tot=tot+coin[i];
    }
   
    for (int i=0;i<n;i++)
    {
    for (int j =i+1; j <n; j++)
    {
     if(coin[i]<coin[j])
     {
        temp=coin[j];
        coin[j]=coin[i];
        coin[i]=temp;
     }   
    }
    }
    int i;
    for(i=0;i<n;i++)
   {
    max+=coin[i];
    
    if (max>tot-max)
    {
        break;
    }
   }
    printf("%d",i+1);
}