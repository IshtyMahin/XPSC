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
       int n;
       cin>>n;
       vector<int>v(n);
       for(int i=0;i<n;i++){
        cin>>v[i];
       }
       vector<int>cnt(32,0);
       for(int i=0;i<32;i++){
          for(int j=0;j<n;j++){
            if(v[j]&(1<<i)){
                cnt[i]++;
            }
          }
       }
    //    for(int i=0;i<32;i++){
    //     cout<<cnt[i]<<" ";
    //    }
    //    cout<<endl;
       vector<int>ans;
       for(int i=1;i<=n;i++){
          bool ok=true;
          for(int j=0;j<32;j++){
            if(cnt[j]%i!=0){
                ok=false;
                break;
            }
          }
          if(ok)ans.push_back(i);
       }

       for(auto x:ans){
        cout<<x<<" ";
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