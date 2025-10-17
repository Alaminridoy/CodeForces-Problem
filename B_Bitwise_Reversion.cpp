#include <bits/stdc++.h>
using namespace std;
#define int long long
#define n '\n'
#define bismillah() ios::sync_with_stdio(false); cin.tie(nullptr);

void sol() {
    int x, y, z;
    cin >> x >> y >> z;

    for (int i = 0; i <= 31; i++)
    {
        int cnt=0;
        if(x&(1<<i))cnt++;
        if(y&(1<<i))cnt++;
        if(z&(1<<i))cnt++;

        if(cnt==2){
            cout<<"NO"<<n;
            return;
        }
    }
    cout<<"YES"<<n;
}

signed main() {
    bismillah();
    int t;
    cin >> t;
    while (t--) sol();
}
