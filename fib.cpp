#include<bits/stdc++.h>
using namespace std;
void fib(int n)
{
 int str=0,end=1,ans;
 for(int i=1;i<=n-2;i++)
 {
  
  ans=str+end;
  str=end;
  end=ans;
  cout<<" "<<ans;  
 }
}
int main()
{
int n;
 cin>>n;  
 cout<<"0 1";
//5 for(int i=0;i<n;i++)
 fib(n);
}
