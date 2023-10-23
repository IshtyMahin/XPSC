// subarray product less than k

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k;
    cin>>k;
    if(k <= 1)
    {
        return 0;
    }
    long long p = 1;
    int ans = 0;
    int t = 0;

    for (int h = 0; h < n; h++)
    {
        p *= v[h];
        while (p >= k)
        {
            p /= v[t];
            t++;
        }
        ans += h - t + 1;
    }
    cout<<ans<<endl;
}