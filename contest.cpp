#include<bits/stdc++.h>
using namespace std; 
int main()
{
int T = 1;
cin >> T;
while (T--)
{
int n;

cin >> n;
string ans;
vector<int> frq (26,-1), ar (n); 
for (int i = 0; i < n; i++) {
cin >> ar[i];
for (char k = 'z'; k >= 'a'; k--)
 {
if (frq[k-'a']== ar[i]-1) 
{
frq[k-'a']++;
ans += k;
}
break;
}
}
cout <<ans<< endl;
}

}