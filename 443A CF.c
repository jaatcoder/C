#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,b,lm=0,count=0;
    char ch[1000];
    //scanf("%s",ch);
    gets(ch);
    l=strlen(ch);
    for(i=0;i<l;i++)
    {
        if(ch[i]>=97 && ch[i]<=122)
        lm++;
    }
    for(i=0;i<l-1;i++)
    {
        for(b=i+1;b<l;b++)
        {
            if(ch[i]>='a' && ch[i]<='z'){
            if (ch[i]==ch[b])
            {count++;
            break;
            }
        }

        }        
    }
    printf("%d\n",lm-count);
}