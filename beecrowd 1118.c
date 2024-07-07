#include<stdio.h>
int main()
{
    double b,sum=0,a,count=0;
while(1)
{
scanf("%lf",&a);
if (a>=0 && a<=10)
{
count++;
   sum+=a;
if (count==2.00)
printf("media = %.2lf\n",sum/2.00);
}
}
while (1){
printf("novo calculo (1-sim 2-nao)\n");
scanf("%lf",&b);
if (b==2.00)
break;
}

return 0;
}