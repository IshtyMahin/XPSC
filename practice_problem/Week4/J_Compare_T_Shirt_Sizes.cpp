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
  string s,s1;
  cin>>s>>s1;
  ll n = s.size();
  ll m = s1.size();
  char ans;
  if(s[n-1]==s1[m-1]){
    if(n==m){
        ans='=';
    }
    else{
        if(s[n-1]=='L'){
            if(n>m)ans='>';
            else ans='<';
        }
        else{
            if (n < m)
                ans = '>';
            else
                ans = '<';
        }
    }
  }
  else{
     if(s[n-1]=='S'){
         ans='<';
     }
     else if(s[n-1]=='L'){
        ans = '>';
     }
     else{
        if (s1[m - 1] == 'S')
        {
            ans = '>';
        }
        else if (s1[n - 1] == 'L')
        {
            ans = '<';
        }
     }
  }
  cout<<ans<<endl;
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