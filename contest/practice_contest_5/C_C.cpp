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
       ll n;
       cin>>n;
       vector<ll>v(n);
       vector<ll>v1(n);
       ll mx1=0,mx2=0;
       for(ll i=0;i<n;i++){
          cin>>v[i];
       }
       for(ll i=0;i<n;i++){
          cin>>v1[i];
       }
       ll c=0;
       for(ll i=0;i<n;i++){
         if(v[i]!=0){
           c++;
         }
         else{
            mx1= max(mx1,c);
            c=0;
         }
       }
       mx1 = max(mx1, c);
       c=0;
       for(ll i=0;i<n;i++){
         if (v1[i] != 0)
         {
            c++;
         }
         else
         {
            mx2 = max(mx2, c);
            c = 0;
         }
       }
       mx2 = max(mx2, c);
       if(mx1>mx2){
        cout<<"Om"<<endl;
       }
       else if(mx1==mx2){
        cout<<"Draw"<<endl;
       }
       else{
        cout<<"Addy"<<endl;
       }
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