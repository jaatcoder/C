#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,count=0,sum;
    char str[129];
   
    scanf("%s",&str);
     l=strlen(str);
    for(i=0;i<l-1;i++)
    {
        for(j=i+1;j<l;j++)
        {
  
            if ( str[i]==str[j])
            {
            count++;
            break;
        
            }
        }
        
     }
     sum=l-count;
     
 if (sum%2==0)
    printf("CHAT WITH HER!\n",count);
    else
    printf("IGNORE HIM!\n");
    return 0;
}