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
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 2; i <= 200; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(__gcd(v[j],i)==1) {
                cout<<i<<nl;
                return;
            }
        }
        
    }
    cout<<-1<<nl;
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