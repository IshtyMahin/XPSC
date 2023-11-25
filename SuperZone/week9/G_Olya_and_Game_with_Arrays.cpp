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
    ll p;
    cin >> p;
    vector<pair<int, int>> pr;
    ll x = p;
    while (p--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(all(v));
        pr.push_back({v[0], v[1]});
    }

    sort(all(pr));

    ll ans = pr[0].first;
    vector<int> ans2;
    
    for (int i = 0; i < x; i++){
        
        ans2.push_back(pr[i].second);
    }
    sort(all(ans2));
    reverse(all(ans2));
    for (int i = 0; i < x - 1; i++)
    {
        ans += ans2[i];
    }
    cout << ans << endl;
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