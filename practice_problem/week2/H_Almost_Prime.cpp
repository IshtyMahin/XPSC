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
   
   ll ans=0;
   for(int i=6;i<=n;i++){
      ll c=0;
      ll x=i;
      for(int j=2;j<i;j++){
          if(x%j==0){
              while(true){
                if(x%j)break;
                x=x/j;
              }
              c++;
          }
      }
     if(c==2)ans++;     
   }
   cout<<ans<<endl;
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