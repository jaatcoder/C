
#include<stdio.h>
#include<string.h>
int main()
{
    int i,sum=0;
    char str[101],str1[101];
    scanf("%s",&str);
    int l=strlen(str);
    scanf("%s",&str1);
    int m=strlen(str1);
    str[l]="\0";
   str1[m]="\0";
   for ( i=0;i<l;i++)
   {
    if (str[i]>='A' && str[i]<='Z')
    ;

    else
    str[i]=str[i]-32;
  }

    for ( i=0;i<m;i++)
   {
    if (str1[i]>='A' && str1[i]<='Z')
    ;
    else
   str1[i]=str1[i]-32;
   }
   for (i=0;i<l;i++)
   {
   if(str[i]==str1[i])
   sum=0;
    if (str[i]>str1[i])
    {
    sum=1;
    break;
    }
   else if (str[i]<str1[i])
    {
    sum=-1;
      break;
    }
     
    
   }
  // printf("%s \n%s\n",str,str1);
    

   
printf("%d\n",sum);

   return 0;
}
