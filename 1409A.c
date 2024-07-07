#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,ans;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d %d",&b,&c);
        if(b>c && (b-c)%10==0)
        {
            ans=((b-c)/10);
        }
        else if(b>c && (b-c)%10!=0)
          ans=((b-c)/10)+1;
 else if(c>b && (c-b)%10==0)
 {
    ans=(c-b)/10;
 }
 else if(c>b && (c-b)%10!=0)
 ans=(c-b)/10+1;
 else ans=0;
          printf("%d\n",ans);
    }
    
}