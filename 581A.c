#include<stdio.h>
#include<math.h>

int main()
{
int a,b,d;
scanf("%d %d",&a,&b);
if(a>b){
d=(a-b)/2;
printf("%d %d",b,d);
}
if(b>a){
d=(b-a)/2;
printf("%d %d",a,d);

}
if(a==b)
printf("%d 0",a);
    return 0;
}
