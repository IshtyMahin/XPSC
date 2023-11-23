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
 
void solve (int t) {
       ll n;
       cin>>n;
       vector<ll>v(n);
       for(ll i=0;i<n;i++){
          cin>>v[i];
       }
       ll f=0;
       ll c=0;
       for(int i=0;i<n;i++){
         if(v[i]==1){
            f=i;
            break;
         }
       }
       ll l1=f;
       for(int i=f+1;i<n;i++){
          if(v[i]==1&& v[i-1]==0){
            // cout<<i<<" "<<l1<<endl;
            c+=i-l1-1;
          }

          if(v[i]==1){
            l1=i;
          }
       }
       cout<<c<<endl;
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