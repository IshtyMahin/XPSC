#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
          ll n;
          cin>>n;
          vector<ll>odd;
          ll s=0;
          for(ll i=0;i<n;i++){
              int x;
              cin>>x;
              if(x%2==0)s+=x;
              else odd.push_back(x);
          }
          ll k = odd.size();
          if(odd.size()%2!=0){
             k--;
          }

          sort(all(odd));
          reverse(all(odd));
          for(int i=0;i<k;i++){
            s+=odd[i];
          }
          cout<<s<<endl;
          
}