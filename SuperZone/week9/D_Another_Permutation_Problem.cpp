#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define pb push_back 
# define vi vector <int>
# define vl vector <ll>
#define nl  '\n'
#define yes cout<<"YES"<<nl
#define no  cout<<"NO"<<nl
#define    error  cout<<-1<<nl
# define srt(v) sort((v).begin() , (v).end())
# define rvr(v) reverse(srt(v))
# define all(v) (v).begin() , (v).end()
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)



void solve(int t)
{
    ll n;
    cin >> n ;
    ll ans=0;
    for(ll i=1;i<=n;i++){
        vector<ll>v;
        for(ll j=1;j<i;j++){
            v.push_back(j);
        }
        for(ll j=n;j>=i;j--){
            v.push_back(j);
        }
        ll x=0,y=0;
        for(ll j=0;j<n;j++){
        //    cout<<x<<" "<<y<<endl;
            x+=v[j]*(j+1);
            y = max(y,v[j]*(j+1));
        }
        // cout<<x<<" "<<y<<endl;
        ans=max(ans,x-y);
    }
    
    cout<<ans<<endl;
}

int main() {
   FAST ;
   int t = 1 ;
   cin >> t ;
   while (t--) {
   solve (t) ;
  }
  return 0 ;
}