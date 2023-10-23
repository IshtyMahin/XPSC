// maximum consecutive ones
// https://leetcode.com/problems/max-consecutive-ones-iii/description/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
          ll n;
          cin>>n;
          vector<ll>v(n);
          for(ll i=0;i<n;i++){
             cin>>v[i];
          }
          int k;
          cin>>k;

          int tail=0,ans=0;

          for(int head=0;head<n;head++){
            if(v[head]==0)k--;

            while(k<0){
                if(v[tail]==0)k++;
                tail++;
            }
            ans = max(ans, head - tail + 1);
          }
          cout<<ans<<endl;
}