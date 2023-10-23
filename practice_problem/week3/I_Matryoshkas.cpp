#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define error cout << -1 << nl
#define all(v) (v).begin(), (v).end()
#define FAST                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)

void solve(int t)
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    map<int, int> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }

    ll ans = 0;
    ll l = -1;
    ll c = 0;
    for (auto [x, y] : m)
    {
        if (l + 1 != x)
            c = 0;
        ans += max(0LL, y - c);
        l = x;
        c = y;
    }
    cout << ans << endl;
}

int main()
{
    FAST;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve(t);
    }
    return 0;
}