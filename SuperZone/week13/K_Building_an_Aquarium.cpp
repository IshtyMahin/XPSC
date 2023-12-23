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
    ll n,x;
    cin>>n>>x;
    vl v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    ll lo=1,hi=2*1e9;
    ll ans=0;
    while(lo<=hi){
        ll mid = lo+(hi-lo)/2;
        ll t=0;
        for(auto i:v){
            if(i<mid){
                t+= mid-i;
            }
        }

        if(t<=x){
            ans=mid;
            lo=mid+1;
        }else{
            hi= mid-1;
        }
    }
    cout<<ans<<nl;
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