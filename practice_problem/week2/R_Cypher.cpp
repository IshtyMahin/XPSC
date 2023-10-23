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
  ll ar[n];
  for(ll i=0;i<n;i++){
    cin>>ar[i];
  }
  for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    string s ;
    cin>>s;
    for(ll j=0;j<s.size();j++){
        if(s[j]=='D'){
            
            if(ar[i]==9){
                ar[i]=0;
            }
            else{
                ar[i]+=1;
            }
        }
        else{
            if(ar[i]==0){
                ar[i]=9;
            }
            else{
                ar[i]-=1;
            }
        }
    }
    cout<<ar[i]<<" ";
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