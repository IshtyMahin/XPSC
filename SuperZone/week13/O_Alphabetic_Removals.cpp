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
#define coutv(v) for(auto it:v)cout<<it<<' ';cout<<nl;
#define cout(v) cout<<v<<nl;
#define cinv(v) for(auto &it:v)cin>>it;
#define cin(v) cin>>v;
#define rvr(v) reverse(srt(v))
#define all(v) (v).begin(), (v).end()
#define FAST                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)

void solve(int t)
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char,int>mp;
    for (int i =0 ; i < n; i++)
    {
        mp[s[i]]++;
    }

    for(auto i:mp){
        ll y = i.second;
        ll p = min(y,k);
        mp[i.first]-=p;
        k-=p;
        if(k==0)break;
    }
    string ans;
    for(int i=n-1;i>=0;i--){
        if(mp[s[i]]){
            ans.push_back(s[i]);
            mp[s[i]]--;
        }
    }
    reverse(all(ans));
    cout<<ans<<nl;
}

int main()
{
    FAST;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve(t);
    }
    return 0;
}