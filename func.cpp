#include<bits/stdc++.h>
using namespace std;
float are(int a,int b, int c)
{
    int s=(a+b+c)/2;
    float ans=s*(s-a)*(s-b)*(s-c);
    return s;
}
int main()
{
    int a,b,c;
    cin>>a,b,c;
    are(a,b,c);
    
}