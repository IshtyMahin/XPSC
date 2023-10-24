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
  ll n,m,k;
  cin>>n>>m>>k;
  vector<ll>v(n),v1(m);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  for(int i=0;i<m;i++){
    cin>>v1[i];
  }
  sort(all(v));
  reverse(all(v));
  sort(all(v1));
  reverse(all(v1));
  ll ans=0;
  for(int i=0;i<min(n,m);i++){
     ll x = v1[i]*k;
     ll p= min(v[i],x);
     ans+=p;
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