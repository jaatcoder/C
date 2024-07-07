#include<stdio.h>
int main()
{
    double sum=0,a,count=0;
while(1)
{
    if (count==2.00)
   break;
scanf("%lf",&a);
if (a>=0 && a<=10)
{
count++;
   sum+=a;

}


   

}
printf("media = %.1lf\n",sum/2.00);
return 0;
}