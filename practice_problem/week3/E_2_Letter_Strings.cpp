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
  ll n;cin>>n;
  map<string,ll>mp;
  ll cnt=0;
  for(ll i=0;i<n;i++){
    string s;
    cin>>s;
    for(char x = 'a';x<='k';x++){
        if(s[1]!=x){
            string a;
            a+=s[0];
            a+=x;
            cnt+=mp[a];
        }
    }
    for(char x = 'a';x<='k';x++){
        if(s[0]!=x){
            string a;
            a+=x;
            a+=s[1];
            cnt+=mp[a];
        }
    }
    mp[s]++;
  }
  cout<<cnt<<endl;
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