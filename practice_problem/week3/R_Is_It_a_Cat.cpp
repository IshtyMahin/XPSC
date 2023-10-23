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
    string s;
    cin >> n >> s;

    for (int i = 0; i < n; i++)
    {
        char x = s[i];
        if (islower(x))
            s[i] = toupper(x);
    }

    s.resize((unique(all(s)) - s.begin()));

    if (s == "MEOW")
        cout << "YES\n";
    else
        cout << "NO\n";
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