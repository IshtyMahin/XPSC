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
    ll n;
    cin >> n;
    vector<ll> a(n), b(n), dmin(n), dmx(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    list<ll> ls;
    ll bptr = n - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        while (bptr >= 0 && b[bptr] >= a[i])
        {
            ls.push_back(b[bptr]);
            bptr--;
        }

        dmin[i] = ls.back() - a[i];
        dmx[i] = ls.front() - a[i];

        ll a_used = n - i;
        ll b_used = (n - bptr - 1);

        if (a_used == b_used)
        {
            ls.clear();
        }
    }

    for (auto x : dmin)
    {
        cout << x << " ";
    }
    cout << endl;
    for (auto x : dmx)
    {
        cout << x << " ";
    }
    cout << endl;
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