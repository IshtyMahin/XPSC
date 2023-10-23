#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     string st;
     cin>>st;
     ll c=1;

     ll s=0;
     for(int i=0;i<st.size();i++){
       s+=int(st[i]-'0');
     }
    
     while (s >= 10)
     {
       c++;
       ll s1 = 0;
       while (s / 10)
       {
           s1 += s % 10;
           s/= 10;
       }
       s1 += s;
       s = s1;
     }
if(st.size()==1)cout<<0<<endl;
else 
    cout<<c<<endl;
}