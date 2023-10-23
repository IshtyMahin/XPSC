#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     string s1,s2;
     cin>>s1>>s2;
     ll c=0;
     for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i])c++;
     }
     cout<<c<<endl;
}