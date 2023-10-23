#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
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
    map<string, int> m;

    for (int i = 0; i < n - 1; i++)
    {

        string s1;
        s1 += s[i];
        s1 += s[i + 1];
        m[s1]++;
    }

    cout << m.size() << nl;
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