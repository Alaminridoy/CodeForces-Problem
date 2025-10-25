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
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int chk = count(s.begin(),s.end(), 'B');
    while (q--)
    {
        int a;
        cin >> a;
        if (!chk)
        {
            cout << a << "\n";
            continue;
        }
        int ans = 0;
        while (a > 0)
        {
            for (int i = 0; i < n && a > 0; i++)
            {
                if (s[i] == 'A')
                    a--;
                else
                    a /= 2;
                ans++;
            }
        }
        cout << ans << "\n";
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