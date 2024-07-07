#include<stdio.h>
int main()
{
    int a,b,c=1;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b);
        int ar[b];
        for(int j=0;j<b;j++)
        {
            scanf("%d",&ar[j]);
        }
        for(int j=0;j<b;j++)
        {
            if (ar[j]==ar[j+1])
            c=1;
            else if(ar[j+1]-ar[j]>1){
            c=0;
            break;}
            else 
            c=1;
        }
        if (c==0)
        printf("NO\n");
        else //if (c==1)
        printf("YES\n");
    }

}