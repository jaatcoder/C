#include<stdio.h>
#include<string.h>
int main()
{
    char wub[1001];
    scanf("%s",wub);
    int l=strlen(wub);
    for (int i=0;i<l;i++)
    {
        if ( wub[i]=='W' && wub[i+1]=='U' && wub[i+2]=='B')
        {
        i+=2;
       // printf(" ");
        }
        else
        printf("%c",wub[i]);
        if(wub[i+1]=='W' && wub[i+2]=='U' && wub[i+3]=='B')
        printf(" ");
    }
}