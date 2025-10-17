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
    set<int> s; 
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    int i = 0;
    for (auto val : s)
    {
        if (val != i)
        {
            cout << i << nl;
            return;
        }
        i++;
    }
    cout << i << nl; 
}

signed main()
{
    bismillah();
    int t;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}
