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
  ll ans=0;
  priority_queue<int>pq;
  for(int i=0;i<n;i++){
      int x;
      cin>>x;
      if(x>0){
        pq.push(x);
      }
      else{
         if(pq.size()){
            ans+=pq.top();
            pq.pop();
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