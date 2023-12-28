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
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(all(v));
    if(v[0]==v.back()){
        cout<<0<<nl;
        return;
    }
    ll f=0,f1=0,gd=abs(v[0]-k);
    for(ll i=0;i<n;i++){
        v[i]-=k;
        // cout<<v[i]<<nl;
        if(v[i]<0){
            f++;
        }
        if(v[i]>0){
            f1++;
        }
        
        v[i]=abs(v[i]);
        gd = gcd(v[i],gd);

    }

    if(f!=n && f1!=n){
        cout<<-1<<nl;
        return;
    }
    
    ll ans=0;
    for(ll i=0;i<n;i++){
       ans+= (v[i]/gd-1);
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