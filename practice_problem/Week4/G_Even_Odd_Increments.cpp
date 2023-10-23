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
    ll n, q;
    cin >> n >> q;
    ll sum = 0, e = 0, o = 0;
    for (ll i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        if (x & 1)
            o++;
        else
            e++;
    }

    while (q--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 0)
        {
            sum += e * b;
            if (b & 1)
                o += e, e = 0;
        }
        else
        {
            sum += o * b;
            if (b & 1)
            {
                e += o;
                o = 0;
            }
        }
        cout << sum << endl;
    }
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