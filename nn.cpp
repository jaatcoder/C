#include <bits/stdc++.h>           
using namespace std;
int main () 
{
 int t;
 cin>>t;
 while(t--)
 {
  int n,m,fact=1;
  cin>>n>>m;
  int ar[n];
  list<int>li;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    li.push_back(x);
  }
 
  string s;
  cin>>s;
 for(int i=0;i<li.size();i++)
 {
  for(int j=0;j<li.size();j++)
  fact=fact*ar[j];

  
  cout<<fact%m<<" ";
  fact=1;

  if(s[i]=='L')
  li.pop_front();
  if(s[i]=='R')
  li.pop_back();
 }
 cout<<endl;
 }
 
}