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
    string s;
    cin >> s;
    vector<pair<ll, ll>> v;
    ll ans = -1;
    for (ll i = 0; i < n; i++)
    {
        ll a = 0, b = 0, c = 0;
        for (ll j = i; j < min(n, i + 15); j++)
        {
            if (s[j] == 'a')
                a++;
            if (s[j] == 'b')
                b++;
            if (s[j] == 'c')
                c++;

            if (a > b && a > c && j - i + 1 >= 2)
            {
                if (ans == -1)
                {
                    ans = j - i + 1;
                }
                ans = min(ans, j - i + 1);
            }
        }
    }
    cout<<ans<<nl;
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