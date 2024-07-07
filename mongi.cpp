#include<bits/stdc++.h>
using namespace std;

//#define pb push_back
int main()
{
//int x;
//cin>>x;
//while(x--){
  int n;
  cin>>n;

  vector<int>a;
 
  for(int i=0;i<n;i++)
  {
    int d;
    cin>>d;
 a.push_back(d);
  }
 
 for(int i=0;i<n/2;i++)
 {
    if(a[i]!=a[n-1-i])
    {
        cout<<"NO"<<endl;
        return 0;
    }
 }
 cout<<"YES"<<endl;

 
}
//}