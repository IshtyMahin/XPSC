#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     int n;
     cin>>n;
     if(n&(n-1)){
         cout<<"Not a power of two";
     }
     else cout<<"Power of two";

}