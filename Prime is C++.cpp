#include<iostream>
#include<math.h>
using namespace std;
bool IsPrime(int x)
{
   int i=2;
   for (i=2;i<x;i++)
   {
    if (x==1)
    return false;
   else if (x%i==0)
    return false;
   }
return true;
}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(IsPrime(i))
        cout<<i<<endl;
    }
}