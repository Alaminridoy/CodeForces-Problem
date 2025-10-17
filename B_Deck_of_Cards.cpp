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
    vector<string> v(n);

    

    int first = count(sk.begin(), sk.end(), '0');
    int last = count(sk.begin(), sk.end(), '1');
    int cnt2 = count(sk.begin(), sk.end(), '2');
    if(n==1 || n==k){
        for(int i=0;i<n;i++){
            cout<<"-";
        }
        cout<<nl;
        return;
    }
    int f=0;int l=n-1;

    for (auto i : sk)
    {
        if(i=='2'){
            continue;
        }
        
        if(i=='0'){
            v[f]='-';
            f++;
        }else if(i=='1'){
            v[l]='-';
            l--;
        }
    }

    for (auto i : sk)
    {
        if(i!='2'){
            continue;
        }
        v[f]='?';
        v[l]='?';
        f++,l--;
    }

    while (f<=l)
    {
        v[f]='+';
        f++;
    }
    
    for (auto u : v){
        cout<<u;

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