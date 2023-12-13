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

int find(int n){
     int a=1;
      while(n%2==0){
        n/=2;
        a*=2;
      }
      return  a;
}
void solve(int t)
{
   ll n;cin>>n;
   vector<ll>ans;
   ans.push_back(n);
   while(n>1){
     int x=find(n);
    if (x==n)x=n/2;
    n-=x;
    ans.push_back(n);
   }

   cout(ans.size());
   coutv(ans);
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