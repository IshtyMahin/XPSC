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
       vector<int>ans;

       ans.push_back(v[0]);
       ll x=v[0];
       for(int i=1;i<n;i++){
           if(v[i]==0){
            ans.push_back(x);
            continue;
           }
           if(x-v[i]>=0){
            cout<<-1<<endl;
            return;
           }
           x+=v[i];
           ans.push_back(x);
       }

       for(auto p:ans){
        cout<<p<<" ";
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