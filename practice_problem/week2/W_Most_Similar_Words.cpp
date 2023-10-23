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
  ll n,k;
  cin>>n>>k;
  vector<string>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }

  ll mn=INT_MAX;
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        ll ans = 0;

        for(int p=0;p<k;p++){
           ans+=abs(v[i][p]-v[j][p]);
        }
        mn = min(ans,mn);
    }
  }

  cout<<mn<<endl;

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