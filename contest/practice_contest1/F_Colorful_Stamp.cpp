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
    int n;
    cin >> n;

    string s;
    cin >> s;

    ll r = 0, b = 0;
    ll ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
            b++;
        else if (s[i] == 'R')
            r++;
        else
        {
            if ((r > 0 && b == 0) || (r == 0 && b > 0))
                ans = ans && 0;
            else
                ans = ans && 1;
            r = 0;
            b = 0;
        }
    }

    if ((r > 0 && b == 0) || (r == 0 && b > 0))
        ans = ans && 0;
    else
        ans = ans && 1;

    if (ans)
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