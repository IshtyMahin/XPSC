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
#define coutv(v)           \
    for (auto it : v)      \
        cout << it << ' '; \
    cout << nl;
#define cout(v) cout << v << nl;
#define cinv(v)        \
    for (auto &it : v) \
        cin >> it;
#define cin(v) cin >> v;
#define rvr(v) reverse(srt(v))
#define all(v) (v).begin(), (v).end()
#define FAST                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)

void solve(int t)
{
    string s, q;
    cin >> s >> q;
    ll j = 0;
    ll n = s.size();
    for (int i = 0; i < n; i++)
    {
        ll c = 0, c1 = 1;
        while (i != n - 1 && s[i] == s[i + 1])
        {
            i++;
            c1++;
        }
        while (q[j] == s[i])
        {
            c++;
            j++;
        }
        if (c1 > c)
        {
            no;
            return;
        }
    }
    if(j!=q.size()){
        no;
        return;
    }
    yes;
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