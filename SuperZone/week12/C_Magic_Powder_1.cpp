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
    ll n,k;cin>>n>>k;
    vector<ll>v(n);
    vector<ll>ex(n);

    for(int i=0;i<n;i++){
          cin>>v[i];
    }
    for(int i=0;i<n;i++){
          cin>>ex[i];
    }

    ll l=1,r=2e9,ans=0;
    while(l<=r){
        ll mid = l+(r-l)/2;
        ll cnt=0;
        for(int i=0;i<n;i++){
            cnt+= max((mid*v[i])-ex[i],0LL);
            if(cnt>k)break;
        }

        if(cnt<=k){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
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