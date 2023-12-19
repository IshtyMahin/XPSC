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
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));

    vector<ll> ans(n + 1);

    ll j = 0;
    for (int i = 0; i < (n + 1) / 2; i++)
    {
        ans[j] = v[i];
        j += 2;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << ans[i] << " ";
    // }
    // cout << nl;
    j = 1;

    for (int i = (n + 1) / 2; i < n; i++)
    {
        ans[j] = v[i];
        j = j + 2;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << ans[i] << " ";
    // }
    // cout << nl;

    for (int i = 1; i < n - 1; i++)
    {
        if ((ans[i] > ans[i - 1] && ans[i] > ans[i + 1]) || ans[i] < ans[i - 1] && ans[i] < ans[i + 1])
            continue;
        no;
        return;
    }
    if (n > 2)
    {
        if ((ans[n - 1] > ans[n - 2] && ans[n - 1] > ans[0]) || ans[n - 1] < ans[n - 2] && ans[n - 1] < ans[0])
        {
        }
        else
        {
            no;
            return;
        }
    }

    yes;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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