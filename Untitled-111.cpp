#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int n;
        cin>>n;

        ll a[n];

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        

        ll ans =INT_MIN;

        for (int i = 0; i < n-1; i++)
        {
            ans = max(a[i]*a[i+1],ans);
        }
        cout<<ans<<"\n";
        


    }
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}
