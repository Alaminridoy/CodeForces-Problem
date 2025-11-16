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
    int a, b, n;
    cin >> a >> b >> n;

    int d = a / b;
 
    if( n <= d || a == b){
        cout<<1<<endl;
        return;
    }
 
    cout<<2<<endl;
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