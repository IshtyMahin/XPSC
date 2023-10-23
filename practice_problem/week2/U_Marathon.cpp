#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     int t;
     cin>>t;
     while(t--){
         ll a, b, c, d;
         cin >> a >> b >> c >> d;
         ll p=0;
         if(b>a)p++;
         if(c>a)p++;
         if(d>a)p++;
         cout<<p<<endl;
     }

}