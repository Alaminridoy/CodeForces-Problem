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
    vector<int> od;
    vector<int> evn;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x & 1)
            od.push_back(x);
        else
            evn.push_back(x);
    }

    int ans = 0;

    if (evn.size())
        ans = accumulate(evn.begin(), evn.end(), 0LL);

    if (od.size() == 0)
    {
        cout << 0 << nl;
    }
    else
    {
        sort(od.rbegin(), od.rend());
        if (od.size() & 1)
        {
            for (int i = 0; i <= od.size() / 2; i++)
            {
                ans += od[i];
            }
        }
        else
        {
            for (int i = 0; i < od.size() / 2; i++)
            {
                ans += od[i];
            }
        }
        cout << ans << nl;
    }
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