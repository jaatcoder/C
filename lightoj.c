#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,a,b,c=0;
    char str[1000];
    scanf("%d",&a);
    // for(i=0;i<a;i++)
    // { 
        scanf("%s",str);
        b=strlen(str);
        for( j=0;j<b;j++)
        {
            if (str[j]==' ')
            c++;
            printf("%d\n",c);
        }
        printf("%d\n",c);
    // }
// printf("%d\n",c);
}