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
  bitset<55>s[55];
  bitset<55>all;
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    int k;cin>>k;
    while(k--){
        int x;
        cin>>x;
        s[i][x]=1;
    }
    all|=s[i];
  }
  int ans=0;
  for(int i=1;i<=55;i++){
    if(all[i]==0)continue;
    bitset<55>tmp;
    for(int j=1;j<=n;j++){
        if(s[j][i]==0){
            tmp |=s[j];
        }
    }
    ans = max(ans,(int)tmp.count());
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