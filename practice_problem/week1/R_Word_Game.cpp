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

    map<string, int> mp1;
    map<string, int> mp2;
    map<string, int> mp3;
    map<string, int> all;
    ll a = 0, b = 0, c = 0;
    int n;
    cin >> n;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            string s;
            cin >> s;
            all[s]++;
            if (i == 0)
                mp1[s] = 1;
            if (i == 1)
                mp2[s] = 1;
            if (i == 2)
                mp3[s] = 1;
        }
    }

    for (auto [p, q] : all)
    {

        if (q == 1)
        {
            if (mp1[p])
                a += 3;
            if (mp2[p])
                b += 3;
            if (mp3[p])
                c += 3;
        }
        else if (mp1[p] == 1 && mp2[p] == 1 && mp3[p] == 1)
        {
        }
        else
        {
            if (mp1[p] && mp2[p])
            {
                a++;
                b++;
            }
            if (mp2[p] && mp3[p])
            {
                c++;
                b++;
            }
            if (mp1[p] && mp3[p])
            {
                a++;
                c++;
            }
        }
    }

    cout << a << " " << b << " " << c << endl;
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