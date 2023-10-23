// https://codeforces.com/problemset/problem/1514/B

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
const int MOD =1e9+7;
void solve (int t) {
  ll n,k;cin>>n>>k;
  ll ans=1;
  for(int i=0;i<k;i++){
    ans=(ans*n)%MOD;
  }
  cout<<ans<<endl;
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