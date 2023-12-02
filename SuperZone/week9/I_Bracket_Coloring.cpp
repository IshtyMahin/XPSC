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
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll l = 0, a = 0, b = 0;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            if (a == 0)
            {
                l++;
                ans.push_back(1);
            }
            else
            {
                a--;
                ans.push_back(2);
            }
        }
        else
        {
            if (l > 0)
            {
                l--;
                ans.push_back(1);
            }
            else
            {
                a++;
                ans.push_back(2);
            }
        }
    }

    if (l != 0 || a != 0)
    {
        cout << -1 << endl;
        return;
    }

    ll mx = *max_element(all(ans));
    ll mn = *min_element(all(ans));
    if (mn == mx)
    {
        cout << 1 << endl;
        for (auto i : ans)
        {
            cout << 1 << " ";
        }
    }
    else
    {
        cout << 2 << endl;
        for (auto i : ans)
        {
            cout << i << " ";
        }
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