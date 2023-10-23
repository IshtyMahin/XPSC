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
 
void solve () {
  ll n;
  cin>>n;
  map<int,int>mp;
  while(n--){
    int x;
    cin>>x;
    mp[x]++;
  }

  for(auto [a,b]:mp){
    if(b==1)cout<<a<<endl;
  }
}

int main() {
   FAST ;
   solve () ;
  return 0 ;
}