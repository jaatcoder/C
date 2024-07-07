#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,c=0,ans=0,l;

    scanf("%d",&n);
    char str[n];
    
    
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]<='a' && str[i]>='z')
        str[i]=str[i]-32;
    }


    
    for(i=0;i<l-1;i++)// ABAAABBBCCCDDDEE
    {
        for(int j=i+1;j<l;j++){

        if (str[i]==str[j])
        {
        c++;
        break;}

        }
    }
    printf("%d \n",c);
    ans=l-c;

    if (ans==26)printf("Yes\n");
    else printf("No\n",ans,c,l);
}
