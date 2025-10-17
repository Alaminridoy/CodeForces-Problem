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
    int x;
    cin >> x;

    // use of x&(x-1)
    // ডান দিকের প্রথম 1-বিট (lowest set bit) 0 হয়ে যায়

    // a) সেট বিট গণনা করা (Count number of 1s)
    int count = 0;
    while (x)
    {
        x = x & (x - 1);
        count++;
    }
    cout << count << nl;

    //     🟢 c) বিটমাস্কের সাবসেট বের করা (Iterate subsets of mask)

    // বিটমাস্ক ব্যবহার করা হয় যখন আমরা কোনো সেটকে বাইনারি আকারে রাখি।

    // for (int s = mask; s; s = (s - 1) & mask)

    // এই লুপটি mask এর সব সাবসেট তৈরি করে দ্রুতভাবে।
    // এটা অনেক সমস্যা সমাধানে লাগে (যেমন DP on subsets, bitmask optimization ইত্যাদি)।
}
signed main()
{
    bismillah();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}