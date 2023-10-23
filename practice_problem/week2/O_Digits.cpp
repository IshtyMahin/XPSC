#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     ll n,k;
     cin>>n>>k;
     ll c=0;
     while(n>0){
        c++;
        n/=k;
     }
     cout<<c<<endl;
}