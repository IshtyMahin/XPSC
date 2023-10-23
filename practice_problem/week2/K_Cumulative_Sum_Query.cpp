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
    vector<ll> v(n), pr(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i == 0)
            pr[i] = v[i];
        else
            pr[i] =v[i] + pr[i - 1];
    }
    
    int k;
    cin >> k;
    while (k--)
    {
        int a, b;
        cin >> a >> b;
        a--;
        ll ans = pr[b];
        if(a!=-1)ans-=pr[a];
        cout<<ans<<endl;
    }
}

int main()
{
    FAST;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve(t);
    }
    return 0;
}