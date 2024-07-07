
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
int num,f,s,res1=1,res2=1;
cin>>num;
f=ceil((num*1.0)/3);
s=f;

while(res1!=num && res2!=num){
    res1=s+2*f;
    res2=f+2*s;
    s--;
}
int S=s+1;
cout<<f<<" "<<S<<endl;
    }
    return 0;
}