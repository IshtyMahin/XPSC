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
   ll x =0,cnt=0;

   string p = "314159265358979323846264338327";
   for(int i=0;i<s.size();i++){
        if(s[i]==p[x]){
            x++;
        }
        else{
            break;
        }

   }


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