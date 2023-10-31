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
#define srt(v) sort((v).begin(), (v).end())
#define rvr(v) reverse(srt(v))
#define all(v) (v).begin(), (v).end()
#define FAST                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)

void solve(int t)
{
    string s;
    cin >> s;
    int sz = s.size();
    deque<pair<int, int>> d;
    int x = (s[0] - 'a') + 1;
    int y = (s[sz - 1] - 'a') + 1;

    for (int i = 1; i < sz - 1; i++)
    {
        int a = (s[i] - 'a') + 1;
        if ((x <= a && a <= y) || (x >= a && a >= y))
        {
            d.push_back({a, i + 1});
        }
    }
    sort(all(d));
    if(x>y)reverse(all(d));
    d.push_front({x, 1});
    d.push_back({y, sz});
    int ans = 0;
    for (int i = 0; i < d.size() - 1; i++)
    {
        ans += abs(d[i].first - d[i + 1].first);
    }
    cout << ans << " " << d.size() << endl;
    for (auto i: d)
    {
        cout << i.second<< " ";
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