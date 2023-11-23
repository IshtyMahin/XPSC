// Unique number , given 2N + 1 numbers where every number comes twice expect one number .Find out that unique number.

#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     int n;cin>>n;
     vector<int>v(n);
     ll x=0;
     for(int i=0;i<n;i++){
        cin>>v[i];
        x^=v[i];
     }
     cout<<x<<endl;


}