#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()

int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    ll f;
    cin>>f;
    ll c;
    ll ans=0;
    for (int i = 0; i < m; i++)
    {
        c= v[i]^f;
        if(__builtin_popcount(c)<=k)ans++;
    }
    cout << ans << endl;
}