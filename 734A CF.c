#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i,countA=0,countD=0;
    scanf("%d",&a);
    char game[a];
    scanf("%s",&game);
    for(i=0;i<a;i++)
    {
        if (game[i]=='A')
        countA++;

        //else
        if(game[i]=='D')
        countD++;
        
    }
    if (countA>countD)
    printf("Anton\n");
    if(countA<countD)
    printf("Danik\n");
    if(countA==countD)
    printf("Friendship\n");
    return 0;
}
