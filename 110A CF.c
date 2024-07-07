#include<stdio.h>
#include<string.h>
int main()
{
    char a[1009];
    int l,i,magnum=0;
    scanf("%s",&a);

   l=strlen(a);
   int four=0,seven=0;
  // printf("Len= %d\n",l);
    for(i=0;i<l;i++)//4324// 0=48 1=49 4=52-'0'
    {
        // if (a[i]!='4' || a[i]!='7' )
        // {
        //     printf("NO\n");
        //     return 0;
        // }
        if((a[i]-'0')==4||(a[i]-'0')==7)
         {
            if((a[i]-'0')==4)four++;
            else seven++;
           // continue;
         }
         
         
    }
    
    if(four+seven==4||four+seven==7)
    printf("YES\n");
    else
    printf("NO\n");
    return 0;
}