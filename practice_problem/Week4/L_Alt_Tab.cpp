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
       vector<string>v(n);
       for(ll i=0;i<n;i++){
          cin>>v[i];
       }
       map<string,int>mp;
       string s="";
       for(int i=n-1;i>=0;i--){
          string s1=v[i];
          mp[s1]++;
          if(mp[s1]==1){
             s+=s1[s1.size()-2];
             s+=s1[s1.size()-1];
          }
       }
       cout<<s<<endl;
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