#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     ll n;
     cin>>n;
     vl v(n);
     for(int i=0;i<n;i++){
        cin>>v[i];
     }

     ll c=0;
     for(int  i=1;i<n-1;i++){
        if(v[i-1]==1 && v[i+1]==1 && v[i]==0){
            c++;
            v[i+1]=0;
        }
     }
     cout<<c<<endl;
}