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
  if(n>=1900){
      cout << "Division 1" << endl;
  }
  else if(n>=1600){
      cout << "Division 2" << endl;
  }
  else if(n>=1400){
      cout << "Division 3" << endl;
  }
  else{
      cout << "Division 4" << endl;
  }
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