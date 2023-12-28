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
  vector<ll>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }

  ll x=2;
  while(1){
    unordered_set<ll>s;
        for(int i=0;i<n;i++){
            ll y=v[i]%x;
            s.insert(y);
            if(s.size()>2){
                break;
            }
        }
        if(s.size()==2){
            cout<<x<<nl;
            return;
        }
        x*=2;
    }
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