#include<stdio.h>
int main()
{
    int a,b,i=1,c;
    scanf("%d %d",&a,&b);

//     while((a*i-b)%10!=0)
//     {
//        i++;
//     }
//     printf("%d",i);
// }
while(1)
{
    c=a*i;
    if(c%10==0)
    {printf("%d",i);
    break; 
    }
    else if((c-b)%10==0){
    printf("%d",i);
    break;
    }
    else
    i++;
}
}