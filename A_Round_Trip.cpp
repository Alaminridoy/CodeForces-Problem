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
    int r, x, d, n;
    cin >> r >> x >> d >> n;
    string s;
    cin >> s;
    int ans = 0;
    int y = r;
    for (char c : s)
    {
        if (c == '1')
        {
            ans++;
            y = max(0LL, y - d);
        }
        else
        {
            if (y < x)
                ans++;
        }
    }
    cout << ans << "\n";
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