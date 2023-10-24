#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
          int n;
          cin>>n;
          vector<int>v(n);
          for(ll i=0;i<n;i++){
             cin>>v[i];
          }

          for(int i=0;i<(1<<n);i++){
            int sum=0;
            for(int j=0;j<n;j++){
                 if(i&(1<<j))sum+=v[j];
                 else sum-=v[j];
            }
            sum%=360;
            if(sum==0){
                cout<<"YES"<<endl;
                return 0;
            }
          }
          cout<<"NO"<<endl;
          return 0;
}