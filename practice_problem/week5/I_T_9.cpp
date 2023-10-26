#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
bool isPossible(ll mid ,vector<ll>v,ll m){
    ll s=0;
    for(int i=0;i<v.size();i++){
       if(mid<v[i])s+=v[i]-mid;
    }
    // cout<<s<<endl;
    return s>=m;
}
int main(){
          ll n,m;
          cin>>n>>m;
          vector<ll>v(n);
          ll l=0,r=0;
          for(ll i=0;i<n;i++){
             cin>>v[i];
             r=max(r,v[i]);
          }

          ll ans;
          while(l<=r){
            // cout<<l<<" "<<r<<endl;
            ll mid = (l+r)/2;
            // cout<<mid<<endl;
            if(isPossible(mid,v,m)){
                  ans=mid;
                  l=mid+1;
            }
            else{
                r=mid-1;
            }
          }
          cout<<ans<<endl;
          
}