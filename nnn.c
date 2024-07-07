#include<stdio.h> 
int main()
{
    //char temp;
    int arr[]={1,2,3,4,5};
int j;
int *ptr=arr;
for(int i=0;i<5;i++)
{
    printf("%d",*(arr+i));
++ptr;
}
}
