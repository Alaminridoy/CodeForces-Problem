#include <bits/stdc++.h>
using namespace std;
#define bismillah()               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
#define nl '\n'
void sol()
{
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int cost = 0;
    // Step 1:
    int mx = v[0];
    for (int i = 1; i < n; i++)
    {
        mx = max (mx,v[i]);
        if(i&1)v[i] =mx;
            
    }
    if(v[0]==v[1]) cost++;

    // for (auto u : v)
    // {
    //     cout<<u<<" ";
    // }
    // cout <<nl;

    // Step 2:
    
    for (int i = 2; i < n; i += 2) { // even positions (1-indexed)
        if (v[i-1] <= v[i] ) {
            // cout<<v[i-1]<<" "<<v[i]<<nl;
            cost += (v[i] - v[i-1])+ 1;
        }
    }

    cout << cost << nl;
    
}
signed main()
{
    bismillah();
    int t = 1;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}