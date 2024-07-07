// #include<stdio.h>
// int main()
// {
//     int n,i,j,a,b,tot=0;
//     scanf("%d",&n);
//     int ar[n+1][3],temp=0;
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<2; j++)
//         {
//             scanf("%d",&ar[i][j]);
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<2;j++)
//         {  if (j==0 )
//         {
//            temp= temp+ar[i][j+1]-ar[i+1][j];
           
           
        
           
//     if ( tot<temp)
//           tot=temp;
    
//         }
//     }
//     }
//     printf("%d",tot);
// }
#include<stdio.h>
int main()
{
	int i,a,b,n,temp=0,sum=0,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d %d",&a,&b);
	temp=temp-a+b;
	if (max<temp)
	max=temp;
	}
	printf("%d",max);
}