#include<stdio.h>
int main()
{
    int n,count100=0,count5=0,count20=0,count10=0,count1=0;
    scanf("%d",&n);
    
    //while(temp!=0)
    {
        count100=n/100;
       count20= n%100/20;
       count10=n%100%20/10;
        count5=n%100%20%10/5;
        count1=n%100%20%10%5/1;
    }

    printf("%d",count100+count5+count20+count10+count1);
}