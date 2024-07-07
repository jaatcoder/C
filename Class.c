#include<stdio.h>
int main()
{
int row,col,n;

scanf("%d",&n);
int ar[n][n];
for(row=0;row<n;row++){
for(col=0;col<n;col++)
{
    scanf("%d",&ar[row][col]);
}

}
int row1,col1,n1;

scanf("%d",&n1);
int ar1[n1][n1];
for(row1=0;row1<n1;row1++){
for(col1=0;col1<n1;col1++)
{
    scanf("%d",&ar1[row1][col1]);
}

}

for(row1=0;row1<n1;row1++)
{
for(col1=0;col1<n1;col1++)
{
    printf("%d ",ar1[row1][col1]*ar[row1][col1]);
}
printf("\n");
}

return 0;
}