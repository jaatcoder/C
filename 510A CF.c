#include<stdio.h>
int main()
{
    int a,b,i,j,c=0;
    scanf("%d %d",&a,&b);
    for (i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            if (i%2==0 && j!=b && c%2==0)
            {
            printf(".");
            }

          else if(i%2==0 && j== b && c%2==0){
          printf("#");
        
          }

        else if(i%2==0 &&j== 1 && c%2==1)
        {
        printf("#");
        }
        else if (i%2==0  && j!=1 && c%2==1){
        printf(".");
        
        }
          else if ( i%2==1)
          printf("#");
        }
    
        printf("\n");
        if (i%2==0)
        c++;
    }
}