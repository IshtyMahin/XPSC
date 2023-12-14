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

    ll  l = 0, r = n - 1, x = -1, y = -1;
    ll ans = 1, ans2 = 1;
    while (l < r)
    {
        if (v[l] != v[r])
        {
            x = v[l];
            y = v[r];
            break;
        }
        l++;
        r--;
    }
    
    while (l < r)
    {
        if (v[l] == x)
        {
            l++;
        }
        else if (v[r] == x)
            r--;
        else if (v[l] != v[r])
        {
            ans = 0;
            break;
        }
        else
        {
            l++;
            r--;
        }
    }
    l = 0, r = n - 1;
    while (l < r)
    {
        if (v[l] == y)
        {
            l++;
        }
        else if (v[r] == y)
            r--;

        else if (v[l] != v[r])
        {
            ans2 = 0;
            break;
        }
        else
        {
            l++;
            r--;
        }
    }


    if (ans2 || ans)
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