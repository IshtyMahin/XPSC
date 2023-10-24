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
  char c;
  cin>>c;
  string s;
  cin>>s;
  s+=s;
  ll mx=0;
  for(int i=0;i<2*n;i++){
     if(s[i]==c){
        ll p=0;
        while(s[i]!='\0' && s[i]!='g')
        {   
            p++;
            i++;
        }
        mx = max(mx,p);
     }
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