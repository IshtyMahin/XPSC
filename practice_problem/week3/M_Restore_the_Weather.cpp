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
# define all(v) (v).begin() , (v).end()
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
 
void solve (int t) {
       ll n,k;
       cin>>n>>k;
       vector<ll>v(n),ans(n);
       vector<pair<ll,ll>>m;
       for(ll i=0;i<n;i++){
           ll x;
           cin>>x;
           m.push_back({x,i});
       }
       for(ll i=0;i<n;i++){
          cin>>v[i];
       }
       sort(all(v));
       sort(all(m));
       for(ll i=0;i<n;i++){
           ans[m[i].second]=v[i];
       }
       
       for(ll i=0;i<n;i++){
          cout<<ans[i]<<" ";
        }
        cout<<endl;
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