#include <bits/stdc++.h>           
using namespace std;
void cel(int a,int b)
{
    int ans;
    if(a%b==0)
    ans=a/b;
    else ans=a/b+1;
    cout<<ans<<endl;
    int ans1=a/b;
    cout<<ans1<<endl;
}
  int main()
{
    int a,b;
    cin>>a>>b;
    cel(a,b);
}