#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
          ll n,x;
          cin>>n>>x;
          vector<ll>v(n);
          for(ll i=0;i<n;i++){
             cin>>v[i];
          }
          for(ll i=0;i<n;i++){
             if(v[i]!=x)cout<<v[i]<<" ";
          }
}