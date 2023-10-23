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
       ll n;
       cin>>n;
       vector<ll>v(n);
       ll ans=0;
       for(ll i=0;i<n;i++){
          cin>>v[i];
          ans+=abs(v[i]);
       }

       ll c=0;
       
       ll f=0;
       for(int i=0;i<n;i++){
           if(f==0 && v[i]<0){
            c++;
            f=1;
           }

           if(v[i]>0)f=0;
       }
       cout<<ans<<" "<<c<<endl;
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