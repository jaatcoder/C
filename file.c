#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE * sort;
    int i=0,arr[100],num;
     sort=fopen("sor.txt","r");
     for(int i=0;i<10;i++)
     {
        fscanf(sort,"%d",&num);
   arr[i]=num;
    }// sort=fopen("sort.txt","r");
    // while(fscanf(sort,"%d",&num)==1)
    // {
        
    //     arr[i++]=num;
    // }
    fclose(sort);
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(arr[j]<arr[i])
            {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
    FILE *sortt;
    fopen("sor.txt","w");
    for(int i=0;i<10;i++)
    {
        fprintf(sort,"%d ",arr[i]);
    }


}