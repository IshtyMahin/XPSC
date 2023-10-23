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
       vector<ll>v(n);
       for(ll i=0;i<n;i++){
          cin>>v[i];
       }
       vector<ll>v1(n);
       v1=v;
       sort(all(v1));
       int x=-1,y=-1;
       for(int i=0;i<n;i++){
           if((v[i]==v1[n-1] || v[i]==v1[n-2]) && x==-1)x=i;
           if((v[i]==v1[n-1] || v[i]==v1[n-2] )&& x!=-1) y=i;
           
       }
       cout<<x<<" "<<y<<endl;
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