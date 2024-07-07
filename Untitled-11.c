#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
   long long int t;

    scanf("%lld",&t);
    int x=pow(2,31);
    int y=pow(2,31)-1;
    if(t<=-x && t>=y)
    printf("Yes");
else printf("No");
    // while(t--)
    // {

    // }
}
