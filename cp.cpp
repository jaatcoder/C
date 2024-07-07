#include <iostream>
#include<math.h>
#include<string.h>
#include<algorithm> 
using namespace std;
int main()
{
    int t,x,sum=0;
    cin>>t>>x;
    int ar[t][x];
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<x;j++)
        {
            cin>>ar[i][j];
        }
    }

    for(int i=0;i<t;i++)
    {
        for(int j=0;j<x;j++)
        {
            cout<<ar[j][i]<<" ";
        }
        cout<<endl;
    }

}
