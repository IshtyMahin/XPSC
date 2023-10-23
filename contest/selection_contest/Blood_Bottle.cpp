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
  string s;
  cin>>s;
  int c=0;
  ll mx=0;
  vector<int>v;
  for(int i=0;i<s.size();i++){
    
      if(s[i]=='1'){
          c++;
        //   cout<<i<<" "<<c<<endl;
      }
      else {
        if(c!=0)v.push_back(c);
        c=0;
      }
  }
  if(c!=0)v.push_back(c);
  sort(all(v));
  reverse(all(v));
  
  for(int i=0;i<v.size();i=i+2){
       mx+=v[i];
  }
  cout<<mx<<endl;
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