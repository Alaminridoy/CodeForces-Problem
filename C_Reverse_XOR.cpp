#include <bits/stdc++.h>
using namespace std;
#define bismillah()               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
#define nl '\n'

bool is_pan(string x,int a,int b){
    while (a<=b)
    {
        if(x[a]!=x[b]) return false;
        a++;b--;
    }
    return true;
}
void sol()
{
    int n;
    cin >> n;

    string s ="";
    if(n==0){
        cout<<"YES"<<nl;
        return;
    }
    while (n>0)
    {
        s=char((n%2) + '0')+s;
        n/=2;
    }
    int i=0 ,j=s.size()-1;
    while (0<=j && s[j]=='0')
    {
        j--;
    }
    int cnt = count(s.begin(),s.end(),'1');
    if(is_pan(s,i,j) && cnt%2==0){
        cout<<"YES"<<nl;
    }else{
        cout<<"NO"<<nl;
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