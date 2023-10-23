#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()
int main()
{
    ll a, b;
    cin >> a >> b;
    ll ans = 0;
    if (a > b)
    {
        ans += a;
        a--;
    }
    else
    {
        ans += b;
        b--;
    }
    if (a > b)
    {
        ans += a;
    }
    else
    {
        ans += b;
    }
    cout << ans << endl;
}