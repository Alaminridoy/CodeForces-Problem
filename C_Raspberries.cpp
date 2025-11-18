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
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    int hasEven = 0;
    bool divisible = false;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] % k == 0) divisible = true;
        if (v[i] % 2 == 0) hasEven++;
    }

    // already divisible
    if (divisible) {
        cout << 0 << nl;
        return;
    }

    // find minimal add for any element to become divisible by k
    int cnt = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        int rem = v[i] % k;
        int add = k - rem;
        cnt = min(cnt, add);
    }

    // special case: k == 4
    if (k == 4) {
        // product divisible by 4 means we need >= 2 factors of 2
        // Case 1: already >=2 even numbers
        if (hasEven >= 2) {
            cout << 0 << nl;
            return;
        }
        // Case 2: exactly 1 even, we can make one more with +1
        if (hasEven == 1) {
            cout << 1 << nl;
            return;
        }
        // Case 3: no evens → need 2 steps or maybe smaller cnt
        cout << min(2LL, cnt) << nl;
        return;
    }

    cout << cnt << nl;
    
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