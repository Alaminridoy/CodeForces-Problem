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
    string s, t;
    cin >> s >> t;

    map<char, int> ms;
    map<char, int> mt;

    for (int i = 0; i < n; i++) {
        ms[s[i]]++;
        mt[t[i]]++;
    }

    for (char c = 'a'; c <= 'z'; c++) {
        if (ms[c] != mt[c]) {
            cout << "NO" << nl;
            return ;
        }
    }
    cout << "YES" << nl;

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