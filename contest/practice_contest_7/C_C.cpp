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
       ll mx = *max_element(all(v));
      
       if(v[0]==mx && v[1]<mx){
         cout<<1<<endl;
         return ;
       }
       if(v[n-1]==mx && v[n-2]<mx){
         cout<<n<<endl;
         return ;
       }
       for(int i=1;i<n-1;i++){
           if(v[i]==mx && (v[i]>v[i-1] || v[i]>v[i+1])){
              cout<<i+1<<endl;
              return ;
           }
       }
       cout<<-1<<endl;
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