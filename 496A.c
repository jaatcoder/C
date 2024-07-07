#include<stdio.h>

int main(){
int n,x,y,i,j,count=0,k;
scanf("%d",&n);
scanf("%d",&x);
int a[x];
for(i=0;i<x;i++){
 scanf("%d",&a[i]);}

 scanf("%d",&y);
 int b[y];
 for(i=0;i<y;i++){
 scanf("%d",&b[i]);}

for(i=0;i<x;i++){
   for(j=0;j<y;j++){
    if(a[i]==b[j]){
      count++;}
    }
   }
 k=x+y-count;
if(n==k)
printf("I become the guy.");
else
printf("Oh, my keyboard!");
return 0;
}
