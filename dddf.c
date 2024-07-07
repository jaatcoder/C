#include<stdio.h>
int main()
{
//     int i,first=0,sec=1,fib=0;
//     printf("%d+",fib);
//     for(i=1;i<5;i++)
//     {
//         fib=first+sec;
//         first=sec;
//         sec=fib;
//         if (i==4)
//         printf("%d\n",fib);
//         else
//         printf("%d+",fib);
//     }

int i,n,ar[100];
scanf("%d",&n);
ar[0]=0;
ar[1]=1;
printf("%d+%d",ar[0],ar[1]);
// for(i=2;i<5;i++)
// {
//     scanf("%d",&ar[i]);
// }

for(i=2;i<n;i++)
{
    ar[i]=ar[i-1]+ar[i-2];
    printf("+%d",ar[i]);
}
printf("\n");
return 0;
}



