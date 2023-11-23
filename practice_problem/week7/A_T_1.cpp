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
   ll n,a,b,p,q;
   cin>>n>>a>>b>>p>>q;
   ll ans1= n/a;
   ll ans2= n/b;
   ll ans3= n/lcm(a,b);
   if(p>q){
     ans2-=ans3;
   }
   else{
    ans1-=ans3;
   }
   ll tAns  = ans1*p + ans2*q;
   cout<<tAns<<endl;
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