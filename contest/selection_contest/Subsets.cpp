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
const int M = 1e9 + 7;
void solve(int t)
{
    ll n, d;
    cin >> n >> d;
    ll a[n];
    ll s = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    ll dp[n+1][s+1] = {0};

    s -= d;
    if (s % 2 != 0)
    {
        cout << 0 << endl;
        return;
    }

    s = s / 2;

    dp[0][0] = 1;
    for (ll i = 1; i <= s; i++)
    {
        dp[0][i] = 0;
    }
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 0; j <= s; j++)
        {
            if (a[i - 1] <= j)
            {
                dp[i][j] = ((dp[i - 1][j - a[i - 1]]) + (dp[i - 1][j])) % M;
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][s] % M << endl;
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