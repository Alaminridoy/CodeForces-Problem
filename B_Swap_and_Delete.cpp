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
    string s;
    cin >> s;

    int zero = count(s.begin(), s.end(), '0');
    int one = count(s.begin(), s.end(), '1');

    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        
        if (s[i] == '1')
        {
            zero--;
        }
        else if(s[i] == '0'){
            one--;
        }

        if (zero < 0 || one < 0)
        {
            cout << s.size() - i << nl;
            return;
        }
    }
    cout << 0 << endl;
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