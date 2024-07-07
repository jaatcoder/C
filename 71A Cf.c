#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,n,count=0;
    char arr[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&arr);
         l =strlen(arr);

    if (l>10){
printf("%c",arr[0]);
printf("%d",l-2);
 printf("%c\n",arr[l-1]);       
        }
        else 
        printf("%s\n",arr);
}
    
    return 0;
}