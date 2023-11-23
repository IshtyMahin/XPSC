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
#define srt(v) sort((v).begin(), (v).end())
#define rvr(v) reverse(srt(v))
#define all(v) (v).begin(), (v).end()
#define FAST                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)

void solve(int t)
{
    ll n, k, l;
    cin >> n >> l >> k;
    vector<ll> v;

    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        if (y == k)
        {
            v.push_back(x);
        }
    }
    if (v.size() <l)
    {
        cout << -1 << endl;
        return;
    }
    sort(all(v));
    reverse(all(v));
    ll s = 0;
    
     for (int i = 0; i < l; i++)
    {
        s += v[i];
    }
    cout << s << endl;
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