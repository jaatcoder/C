
#include<stdio.h>
int main()
{
    int i,ini,end,a,b,sum=0;
    scanf("%d %d",&ini,&end);
    a=ini;
    b=end;
  if (ini>end)
  {
    a=end;
    b=ini;
  }
    for(i=a;i<=b;i++)
    { if (i%13!=0)
    sum=sum+i;  

    }
    printf("%d\n",sum);
    return 0;
}