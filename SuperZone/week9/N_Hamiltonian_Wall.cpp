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
    string s1, s2;
    cin >> s1 >> s2;
    vector<pair<int, int>> p;
    for (int i = 0; i < n ; i++)
    {
        if (s1[i] == s2[i] && s1[i] == 'B')
        {

        }
        else 
        {
            p.push_back({i,s1[i]=='B'});
        }
    }
    int ok=1;
    for(int i=1;i<p.size();i++){
        auto [x,y]=p[i];
        auto [a,b]=p[i-1];
        if((x%2!=a%2) && y!=b)ok=0;
        else if((x%2==a%2) && y==b)ok=0;
    }
    ok?yes:no;
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