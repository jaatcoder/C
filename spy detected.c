#include<stdio.h>
int main()
{
    int i,a;
    scanf("%d",&a);
    while(a)
    {
        int b,temp,k;
        scanf("%d",&b);
        int ar[b+6];
        for(int i=0;i<b;i++)
        {
            scanf("%d",&ar[i]);
            
        }
        // count=1;
        //for(int j=0;j<b-1;j++)
        {
          
            
            if (ar[0]==ar[1] || ar[0]==ar[2])
            {
            temp=ar[0];
            }
            else temp=ar[1];
        }
            for(int j=0;j<b;j++)
            {
                if(ar[j]!=temp)
            k=j;
            }
        
        printf("%d\n",k+1);
        a--;
    }
}


