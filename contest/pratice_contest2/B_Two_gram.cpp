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
     map<string,int>m;
     for(int i=0;i<n-1;i++){
        char a =s[i];
        char b = s[i+1];
        string s1="";
        s1+=a;
        s1+=b;
        m[s1]++;

     }

     ll p=0;
     string ans;
     for(auto [x,y]:m){
        if(y>p){
            p=y;
            ans = x;
        }
     }
     cout<<ans<<endl;

}