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
    int n;
    cin >> n;
    string s;
    cin>>s;

    int zero = count (s.begin(),s.end(),'0');
    int one = count (s.begin(),s.end(),'1');

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cout<<v[n-1]<<nl;
    
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