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
    vector<ll>v(n);
    ll mn1=LLONG_MAX;
    ll s1=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        s1+=v[i];
        mn1=min(mn1,v[i]);
    }
    vector<ll>v1(n);
    ll mn2 = LLONG_MAX;
    ll s2=0;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        s2+=v1[i];
        mn2 = min(mn2, v1[i]);
    }

    ll a = mn2*n + s1;
    ll b = mn1 * n +s2;
    cout<<min(a,b)<<endl;
    
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