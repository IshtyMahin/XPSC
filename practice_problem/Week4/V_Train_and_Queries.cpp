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
    ll n, k;
    cin >> n >> k;
    map<int, pair<int, int>> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (m.count(x))
        {
            m[x].second = i;
        }
        else
            m[x] = {i, i};
    }
    while (k--)
    {
        int a, b;
        cin >> a >> b;
        if (m.count(a) and m.count(b) and m[a].first < m[b].second)
            yes;
        else
            no;
    }
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