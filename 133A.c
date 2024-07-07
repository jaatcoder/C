#include<stdio.h>
#include<string.h>
int main()
{
    int j=0,i;
    char hq[1001];
    scanf("%s",hq);
    int l=strlen(hq);
    for (i=0;i<l;i++)
    {
        if (hq[i]=='H' || hq[i]=='Q' || hq[i]=='9') //|| //hq[i]=='+')
        {
        printf("YES\n");
        return 0;
        }
    }

    printf("NO\n");
}