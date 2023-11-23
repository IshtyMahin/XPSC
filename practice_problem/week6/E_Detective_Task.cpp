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
# define srt(v) sort((v).begin() , (v).end())
# define rvr(v) reverse(srt(v))
# define all(v) (v).begin() , (v).end()
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
 
void solve (int t) {
  string s;
  cin>>s;
  ll lastOne=1;
  ll firstzero=1;
  ll q=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
        lastOne=i+1;

    }
    if(s[i]=='0' && firstzero==1 && s[0]!='0'){
        firstzero=i+1;
    }
    if(s[i]=='?')q++;
  }
//   cout<<lastOne <<" "<<firstzero<<endl;
  ll x= abs(lastOne-firstzero)+1;
  if (q == s.size())
    x = s.size();

  if(lastOne==s.size() && s[0]!='0' && firstzero==1)x=1;
 
  cout<<x<<endl;
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