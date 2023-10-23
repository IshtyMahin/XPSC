#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     ll n;
     cin>>n;
     ll sum=0;
     for(int i=1;i<=n;i++){
         for (int j = 1; j <= n; j++)
         {
             for (int k = 1; k <= n; k++)
             {
                sum += gcd(i,gcd(j,k));
             }
         }
     }
     cout<<sum<<endl;
}