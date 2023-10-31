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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            string s1 = "";
            s1 += s[i - 2];
            s1 += s[i - 1];
            int a = stoi(s1);
            ans += ('a' + (a - 1));
            i-=2;
        }
        else
        {
            char c = s[i];
            int a = c-'0';
            a--;
            ans+=('a'+a);
        }
    }
    reverse(all(ans));
    cout<<ans<<endl;
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