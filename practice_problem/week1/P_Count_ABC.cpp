#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     ll n;
     cin>>n;
     string s;
     cin>>s;
     int c=0;
     for(int i=0;i<n-2;i++){
        if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C'){
            c++;
            i=i+2;
        }
     }
     cout<<c<<endl;
}