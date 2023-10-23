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
    vector<ll> v(n);
    ll odd = 0, even = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll a = v[0] % 2;
    ll b = v[1] % 2;
    // cout<<a<<" "<<b<<endl;
    ll f1 = 1, f2 = 1;
    for (int i = 0; i < n; i = i + 2)
    {
        if (v[i] % 2 != a)f1=0;
            
    }
    for (int i = 1; i < n; i = i + 2)
    {
        
        if (v[i] % 2 != b)f2=0;
    }
// cout<<f1<<" "<<f2<<endl;
    if (f1 && f2)
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