#include <stdio.h>
 int main()
 {
 float x,y;
 int i,n;
 scanf("%d",&n);
 for(i=1; i<=n;i++)
 {
     scanf("%f %f",&x,&y);
    if (y==0)
    printf("divisao impossivel\n");
    else
    printf("%.1f\n",x/(float)y);
        
     }
     return 0;
 }