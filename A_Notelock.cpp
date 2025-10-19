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
    int n, k;;
    cin >> n >>k;

    string s;cin>>s;

    int one = count(s.begin(),s.end(),'1');
    if(one==0){
        cout<<0<<nl;
        return;
    }

    int cnt=0;

    for (int i = 0; i < n; i++)
    {
        if(s[i]=='1'){
            int chk=0;

            for (int j = 0 , l = i-1; j < k-1; j++,l--)
            {
                
                if(s[l]=='1'){
                    chk=1;
                    break;
                }
                
            }
            if(!chk)cnt++;
        }
        
    }
    cout<<cnt<<nl;
    


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