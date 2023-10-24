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
vector<int> palindome;
void palindromeGen()
{
    ll x = 1 << 15;
    for (int i = 0; i < x; i++)
    {
        string str = to_string(i);
        string rev = str;
        reverse(all(rev));
        if (rev == str)
            palindome.push_back(i);
    }
}
void solve(int t)
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    unordered_map<ll, ll> freq;

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        freq[v[i]]++;
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < palindome.size(); j++)
        {
            if ((v[i] ^ palindome[j])<=v[i])
                continue;

            if (freq.find(v[i] ^ palindome[j]) != freq.end())
            {
                ans = ans + freq[v[i] ^ palindome[j]];
            }
        }
    }
    for (auto it : freq)
    {
        ans += (ll)it.second * (it.second + 1) / 2;
    }
    cout << ans << endl;
}

int main()
{
    FAST;
    palindromeGen();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve(t);
    }
    return 0;
}