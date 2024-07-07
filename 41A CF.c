#include<stdio.h>
#include<string.h>
int main()
{
int a,i,j,count=0;
char str[101],rts[101],str1[101];

scanf("%s",&str);
a=strlen(str);
scanf("%s",&str1);

for(i=a-1,j=0;i>=0,j<a;i--,j++)
{

    rts[j]=str[i]; 
}
for(j=0;j<a;j++)
{
if (rts[j]!=str1[j])
count++;
}

if ( count==0)
printf("YES\n");
else
printf("NO\n");

}