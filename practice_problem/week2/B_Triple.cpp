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
    cin >> n;
    map<int,int>mp;
    for (ll i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }

    for(auto [a,b]:mp){
        if(b>=3){
            cout<<a<<endl;
            return ;
        }
    }
    cout<<-1<<endl;
    
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