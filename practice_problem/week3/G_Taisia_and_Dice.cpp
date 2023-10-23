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
  ll n,s,r;
  cin>>n>>s>>r;
  ll a= s-r;
  cout<<a<<" ";
  ll x= r/(n-1);
  ll y=r%(n-1);
  for(int i=0;i<n-1;i++){
    if(y>0){
      cout<<x+1<<" ";
      y--;
    }
    else{
        cout<<x<<" ";
    }
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