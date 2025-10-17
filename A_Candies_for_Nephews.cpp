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
    int ans=0;
    if(n%3!=0){
        int x = n/3;
        x=(x*3)+3;
        ans = x-n;
        cout<<ans<<nl;
    }else{
        cout<<ans<<nl;
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