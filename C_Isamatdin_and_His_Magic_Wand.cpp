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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        if ((v[i] % 2 != v[0] % 2))
        { 
            sort(v.begin(), v.end());
            break;
        }
    }

    for (auto u : v)
    {
        cout << u << " ";
    }
    cout << nl;
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
/*

n toys
i-ai


3 2 1 3 4
2 3 1 3 4

*/