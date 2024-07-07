#include<stdio.h>
int main()
{
    int a,b,c=1;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b);
        int ar[b-1];
        for(int j=0;j<b;j++)
        {
            scanf("%d",&ar[j]);
        }
        for(int j=1;j<b;j++)
        {

         if(ar[j]-ar[j-1]>1){
            c=0;
            break;}
    
        }
        if (c==1 || b==1)
        printf("YES\n");
        else //if (c==1)
        printf("NO\n");
    }

}
