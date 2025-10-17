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
    string sk;
    cin >> sk;
    vector<string> v(n, ".");

    

    int first = count(sk.begin(), sk.end(), '0');
    int last = count(sk.begin(), sk.end(), '1');
    int cnt2 = count(sk.begin(), sk.end(), '2');
    if(n==1 && cnt2==1){
        cout<<"-"<<nl;
        return;
    }else if(n==2 && cnt2==2){
        cout<<"--"<<nl;
        return;
    }
    for (int i = 0; i < first; i++)
        v[i] = "-";

    for (int i = 0, j = n - 1; i < last; i++, j--)
        v[j] = "-";

    if (cnt2)
    {
        if (first < n)
            v[first] = "?";
        if (n - last - 1 >= 0)
            v[n - last - 1] = "?";
        if (cnt2 == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i] == ".")
                    v[i] = "+";
            }
            for (auto &x : v)
                cout << x;
            cout << nl;
            return;
        }
        int cnt = 2;

        int p = 1;
        for (int i = first + 1, j = n - last - 2; p <= cnt2; p++)
        {
            if (cnt & 1)
            {
                if (i < n)
                    v[i++] = "?";
            }
            else
            {
                if (j >= 0)
                    v[j--] = "?";
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] == ".")
                v[i] = "+";
        }
    }

    for (auto &x : v)
        cout << x;
    cout << nl;
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