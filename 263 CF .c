
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
  int i,j,m[5][5],p,q;
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      scanf("%d",&m[i][j]);
    }
  }
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      if(m[i][j]==1)goto x;
    }
  }
 
x:
i++;j++;
//printf("%d %d\n",i,j);
if(i<=3)
p=3-i;
else
p=i-3;
if(j<=3)
q=3-j;
else 
q=j-3;
printf("%d",p+q);
return 0;
}
