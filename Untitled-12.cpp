#include<bits/stdc++.h>
using namespace std;
bool pal(int a)
{
    int b=a;
    int temp=0;
    while(a!=0)
    {
        temp=(temp+a%10)*10;
        a=a/10;
    }
    temp=temp/10;
    if(temp==b)
    return true;
    else 
    return false;
    
}
int main()

{
    int a;
    cin>>a;
    if(pal(a))
    cout<<"YES";
    else cout<<"No";
}