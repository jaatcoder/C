#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0,count1=0;
    char ar[1009];
    scanf("%s",&ar);
    int l=strlen(ar);
    for(i=0;i<l;i++){
    if(ar[i]>='A' && ar[i]<='Z')
    {
        count++;
        // ar[i]=ar[i]+32;
    }
    }
    for(i=0;i<l;i++){
    if(ar[i]>='a' && ar[i]<='z')
    {
        count1++;
        // ar[i]=ar[i]+32;
    }
    }
    if(count>count1){
    for(i=0;i<l;i++){
    if(ar[i]>='a' && ar[i]<='z')
    {
        
        ar[i]=ar[i]-32;
    }
    }
    }
    else
    for(i=0;i<l;i++){
    if(ar[i]>='A' && ar[i]<='Z')
    {
        count++;
        ar[i]=ar[i]+32;
    }
    }
    printf("%s\n",ar);

}