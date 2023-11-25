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

       ll a = *max_element(all(v));
       ll ans=0;
       ll x;
       for(int i=0;i<n;i++){
         if(a==v[i]){
            x=i;
            break;
         }
       }
       
       ll y=a;
       ans=a;

       for(int i=0;i<n;i++){
            //  cout<<v[i]<<" "<<y<<endl;
             if(v[i]>y){
                
                ll p = v[i]-y;
                y+=p;
                ans += p;
                // cout << y <<" "<<ans<<" "<<p<< endl;
             }
             y--;
       }
    //    cout<<ans<<endl;
        y=a;
       ll ans2=a;

       for(int i=n-1;i>=0;i--){
             if(v[i]>y){
                ll p = v[i]-y;
                y+=p;
                ans2 += p;
             }
             y--;
       }
       cout<<min(ans,ans2)<<endl;
}

int main() {
   FAST ;
   int t = 1 ;
//    cin >> t ;
   while (t--) {
   solve (t) ;
  }
  return 0 ;
}