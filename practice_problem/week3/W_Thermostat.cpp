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
    ll l, r, x, a, b;
    cin >> l >> r >> x >> a >> b;

    if (a == b)
    {
        cout << 0 << endl;
    }
    else if (abs(a - b) >= x)
        cout << 1 << endl;
    else if (r - max(a, b) >= x or min(a, b) - l >= x)
        cout << 2 << endl;
    else if (r - b >= x and a - l >= x or r - a >= x and b - l >= x)
        cout << 3 << endl;
    else
        cout << -1 << endl;
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