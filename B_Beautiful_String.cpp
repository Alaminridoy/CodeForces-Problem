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
    string s;
    cin >> n >> s;

    vector<int>v;

    for (int i = 0; i < n; i++)
    {
        if(s[i]=='0'){
            v.push_back(i+1);
        }
    }

    cout<<v.size()<<nl;

    for(auto u : v ) cout<<u<< " ";

    cout<<nl;
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