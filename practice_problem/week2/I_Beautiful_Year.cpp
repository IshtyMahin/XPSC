#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     ll n;
     cin>>n;
     while(n++){
         ll  x = n;
         ll a= x/1000;
         x%=1000;
         ll b = x/100;
         x %= 100;
         ll c= x/10;
         ll d = x%10;

         if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout<<n<<endl;
            break;
         }


     }
}