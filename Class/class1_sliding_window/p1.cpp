#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     int k;cin>>k;
     int i=0,j=0,s=0,mx=INT_MIN;
     while(j<n){
        s+=a[j];
        if(j>=k-1){
           mx = max(mx, s);
         //   cout << s << endl;
           s -= a[i];
           i++;
        }
        j++;
     }
}