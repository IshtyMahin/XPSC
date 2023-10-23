#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n), freq(n + 1, 0);
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        freq[v[i]]++;
    }
    sort(all(freq));
    ll c = 0;
    for (int i = 1; i <= n - k; i++)
    {
        c += freq[i];
    }
    cout << c << endl;
}