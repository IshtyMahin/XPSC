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

void solve(int p)
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll a[n];
    ll t = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
            t += i;
        else
            t += (n - i + 1);
    }
    a[0] = t;
    ll x = n / 2;
    for (int i = 1; i < x; i++)
    {
        if (s[i] == 'L')
        {
            t += (n - i + 1);
        }
        a[i] = t;
    }
    if (n & 1)
    {
        a[n / 2] = a[n / 2 - 1];
        x++;
    }

    for (int i = x; i < n; i++)
    {
        if (s[i] == 'R')
        {
            t += i;
        }
        a[i] = t;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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