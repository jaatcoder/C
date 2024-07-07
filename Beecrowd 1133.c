#include<stdio.h>
int main()
{
    int i,ini,end,a,b;
    scanf("%d %d",&ini,&end);
    a=ini;
    b=end;
  if (ini>end)
  {
    a=end;
    b=ini;
    printf("%d %d \n",a,b);
  }
  if (a>=0 && b>=0){
for (i=a+1;i<b;i++)
{
    if(i%5==2 || i%5==3)


printf("%d\n",i);
}
  }
return 0;

}