#include <bits/stdc++.h>
using namespace std;
#define bismillah()               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
#define nl '\n'

string toBinary(int n)
{
    string binary = "";
    while (n > 0)
    {
        binary = char('0' + (n % 2)) + binary;
        n /= 2;
    }
    return binary;
}

void sol()
{
    int a, b;
    cin >> a >> b;
    if (a == b) {
        cout << 0 << nl;
        return;
    }

    int ga,gb;
    for (int i = 31; i >= 0 ; i--)
    {
        if((1<<i)&a){
            ga=i;
            break;
        }
    }

    for (int i = 31; i >= 0 ; i--)
    {
        if((1<<i)&b){
            gb=i;
            break;
        }
    }
    vector<int>v;
    if(gb>ga){
        cout<<-1<<endl;
        return;
    }else{
        for (int i = 0; i <=max(ga,gb); i++)
        {
            if((1LL<<i)&a){
                if((1LL<<i)&b)
                {

                }else{
                    int done = 1<<i;
                    v.push_back(done);
                }
            }else if((1LL<<i)&b){
                if((1LL<<i)&a)
                {

                }else{
                    int done = 1<<i;
                    v.push_back(done);
                }
            }
        }
    }
    cout << v.size() << "\n";
    for(int u:v) {
        cout << u << " ";
    }
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