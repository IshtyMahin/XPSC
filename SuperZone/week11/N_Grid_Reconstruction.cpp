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
#define coutv(v)           \
    for (auto it : v)      \
        cout << it << ' '; \
    cout << nl;
#define cout(v) cout << v << nl;
#define cinv(v)        \
    for (auto &it : v) \
        cin >> it;
#define cin(v) cin >> v;
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

    ll a = 1, b = n + 1;
    int ar[2][n];
    ar[0][0] = 2 * n - 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
        {
            ar[0][i] = a;
        }
        else
        {
            ar[1][i] = a;
        }
        a++;
    }

    for (int i = 1; i < n; i++)
    {
        if (i % 2)
        {
            ar[1][i] = b;
        }
        else
        {
            ar[0][i] = b;
        }
        b++;
    }
    ar[1][n - 1] = 2 * n;
    for (int i = 0; i < n; i++)
    {
        cout << ar[0][i] << " ";
    }
    cout << nl;
    for (int i = 0; i < n; i++)
    {
        cout << ar[1][i] << " ";
    }
    cout << nl;
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