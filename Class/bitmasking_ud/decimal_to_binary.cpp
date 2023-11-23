#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()

int convertToBinary(int n){
    int ans=0;
    int p=1;
    while(n>0){
        ans+=p*(n&1);

        p*=10;
        n=n>>1;
    }
    return ans;
}
int main(){
     
     int n;
     cin>>n;
     cout<<convertToBinary(n);

}