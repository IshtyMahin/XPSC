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
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        while (v[i] % 2 == 0)
        {
            v[i] /= 2;
            cnt++;
        }
    }

    if (cnt >= n)
    {
        cout << 0 << endl;
        return;
    }

    int ans = 0;
    vector<int> nd;
    for (int i = n; i >= 1; i--)
    {
        ll c = 0;
        ll tm = i;
        while (tm % 2 == 0)
        {
            tm /= 2;
            c++;
        }
        if (c)
            nd.push_back(c);
    }
    sort(all(nd));
    reverse(all(nd));

    for (int i = 0; i < nd.size(); i++)
    {
        cnt += nd[i];
        ans++;
        if (cnt >= n)
        {
            cout << ans << endl;
            return;
        }
    }
    cout << -1 << endl;
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