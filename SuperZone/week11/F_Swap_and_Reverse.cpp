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
   string s;
   cin>>s;
   if(k%2==0){
    sort(all(s));
    cout<<s<<nl;
    return;
   }
   string o,e;

   for(int i=0;i<n;i++){
     if(i%2){
        e.push_back(s[i]);
     }
     else{
        o.push_back(s[i]);
     }
   }
   sort(all(e));
   sort(all(o));
   ll oi=0,ei=0;
   for(int i=0;i<n;i++){
     if(i%2){
        cout<<e[ei];
        ei++;
     }
     else{
        cout<<o[oi];
        oi++;
     }
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