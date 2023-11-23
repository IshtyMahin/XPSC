#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e10;

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll x = 0;
    x = k / n;

    // ll cnt = k-x;
    ll ans = k + x;

    
    // cout << x << " " << x/n << endl;

    while (x > n)
    {
        x = x/n;

        ans += x;
        if (ans % n == 0 && ans>=n)
            ans++;

        // cout << x << " ";
    }
    // cout << endl;

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}