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
    ll x;
    cin>>x;
    vector<pair<int,string>>v(x);
    for(int i=0;i<x;i++){
        string s;
        cin>>s;
        v[i]= {s.size(),s};
    }
    sort(all(v));

    for(int i=0;i<x-1;i++){
        string s=v[i].second;

        string p = v[i+1].second;
    

        if (p.find(s) == string::npos)
        {
            cout << "NO\n";
            return ;
        }
    }
    cout<<"YES"<<endl;
    for(auto [a,s]:v){
        cout<<s<<endl;
    }
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