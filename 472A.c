#include<stdio.h>
#include<string.h>
int main()
{
    int l;
char ter[1000];
  scanf("%s",ter);
  l=strlen(ter);
//printf("%d",l);
for(int i=0;i<l;i++)
{
    if(ter[i]=='-' && ter[i+1]=='-'){
    printf("2");
  i++;
     }
   else if (ter[i]=='.' /*&& ter[i-1]!='-'*/){
    printf("0");
   }
    else if (ter[i]=='-' && ter[i+1]=='.')
    {
        printf("1");
       i++;
    }
     
}
printf("\n");

}
