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
#define print(v)                       \
    for (int i = 0; i < v.size(); i++) \
    {                                  \
        cout << v[i] << " ";           \
    }
#define FAST                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)

void solve(int t)
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> mu(26, 0);
    vector<int> ml(26, 0);

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            mu[s[i] - 'A']++;
        }
        else
        {

            ml[s[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        int x = min(mu[i], ml[i]);
        cnt += x;
        mu[i] -= x;
        ml[i] -= x;
    }

    vector<int> v;
    for (int i = 0; i < 26; i++)
    {
        if (mu[i] > 0)
        {
            v.push_back(mu[i]);
        }
        if (ml[i] > 0)
        {
            v.push_back(ml[i]);
        }
    }

    sort(all(v));
    reverse(all(v));
    int x = v.size();
    int c = 0;
    for (int i = 0; i < x; i++)
    {
        c += v[i] / 2;
    }

    cout << cnt + min(c, k) << endl;
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