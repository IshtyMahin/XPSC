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
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n), v1;
    ll c = 0, c1 = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        if ((v[i] & x) == x)
            v1.push_back(v[i]);
    }

    if (v1.empty())
    {
        no;
        return;
    }
    ll q = v1[0];
    for (int i = 1; i < v1.size(); i++)
    {
        q = q & v1[i];
    }

    if (q == x)
        yes;
    else
        no;
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