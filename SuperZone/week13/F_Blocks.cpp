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
   ll n;cin>>n;
   string s,a;cin>>s;
   a=s;
   vector<ll>v;
   ll f=0;
   for(ll i=0;i<n-1;i++){
    if(s[i]=='W'){
        v.push_back(i+1);
        if(s[i+1]=='B')s[i+1]='W';
        else s[i+1]='B';
    }
   }
   if(s[n-1]=='B')f=1;

   if(s[n-1]=='W'){
      s=a;
      v.clear();
      for(ll i=0;i<n-1;i++){
        if(s[i]=='B'){
            v.push_back(i+1);
            if(s[i+1]=='B')s[i+1]='W';
            else s[i+1]='B';
       }
      }
      if(s[n-1]=='W')f=1;
   }

   if(!f)cout<<-1<<nl;
   else{
      cout<<v.size()<<nl;
      for(auto i:v){
        cout<<i<<" ";
      }
      cout<<nl;
   }
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