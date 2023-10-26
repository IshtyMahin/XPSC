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
bool same(double a,double b){
    return fabs(a-b)<1e-14;
}
void solve (int t) {
       ll n;
       cin>>n;
       vector<ll>v(n);
       for(ll i=0;i<n;i++){
          cin>>v[i];
       }
       ll mx=*max_element(all(v));
       ll l=1,r=mx;
       while(l<=r){
           ll mid = (l+r)/2;
           double s=1.0;
           for(ll i=0;i<n;i++){
             s*=(v[i]*1.0/mid*1.0);
           }
           
           if(same(s,1.0)){
              cout<<"YES"<<endl;
              return;
           }
           else if(s>1){
             l=mid+1;
           }
           else{
             r=mid-1;
           }
       }
       cout<<"NO"<<endl;
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