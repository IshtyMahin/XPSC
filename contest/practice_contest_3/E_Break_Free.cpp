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
const int mod = 1000000007;
void solve (int t) {
       ll n;
       cin>>n;
       vector<ll>v(n);
       ll e=0,o=0;
       for(ll i=0;i<n;i++){
          cin>>v[i];
          if(v[i]%2)o++;
          else e++;
       }
       ll ans=1;
       while(e){
           ans= (ans*2);
           ans = ans%mod;
           e--;
       }
       if(o)cout<<ans<<endl;
       else cout<<ans-1<<endl;

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