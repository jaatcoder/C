//My first 900 rating
#include<stdio.h>
#include<string.h>
int main()
{
    char pl[101];
    scanf("%s",pl);
    int l;
    l=strlen(pl);
    int count0=0,count1=0;
    for(int i=0;i<l;i++)
    {
        if (pl[i]=='0')
        {
            count0++;
            count1=0;
            if (count0==7)
            {
                break;
            }
        }
        else if (pl[i]=='1')
        {
            count1++;
            count0=0;
            if (count1==7)
            {
                break;
            }
            
        }

    }
        if (count1>=7 || count0>=7)
        printf("YES\n");
        else
        printf("NO\n");

}