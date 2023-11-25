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
  map<int,int>m;
  ll x=1;
  
  for(int i=1;i<=n/2;i++){
     for(int j=i;j<=n;j*=2){
        if(m[j])continue; 
        cout<<j<<" ";
        m[j]++;
     }

  }
  for(int i=1;i<=n;i++){
    if(m[i])continue;
    cout<<i<<" ";
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