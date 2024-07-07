#include<stdio.h>
int main()
{
long X,J,M,U=0,B=0;
scanf("%ld",&X);
for(J=0;J<X;J++)
{
scanf("%ld",&M);
U=U+M;
//printf("%d\n",U);
if(U<0){U=0;B++;}
}
printf("%ld",B);
}