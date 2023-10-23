#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     ll n;
     ll k;
     cin>>n>>k;
     while(k--){
        ll x= n%10;
        if(x==0){
            n = n/10;
        }
        else{
            n--;
        }
     }
     cout<<n<<endl;
}