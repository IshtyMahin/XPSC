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
   vector<ll>v(n+1);
   map<ll,ll>mp;
   for(int i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]=1;
   }
   vector<ll>ans(n+1,0);
   for(int i=0;i<=n;i++){
    if(!mp[i]){
         v[n]=i;
         break;
    }
   }

   k%=(n+1);
   for(int i=0;i<=n;i++){
     ans[(i+k)%(n+1)]=v[i];
   }

   for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
   }
   cout<<nl;


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