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
     vector<vector<int>>subsets;
     // TC => 2^n
     for(int i=0;i<(1<<n);i++){ //2^n
        vector<int>subset;
        for(int j=0;j<n;j++){ //n
            if(i&(1<<j))subset.push_back(a[j]);
        }
        subsets.push_back(subset);
     }


     for(auto x:subsets){
            for(auto y:x){
                cout<<y<<" ";
            }
            cout<<endl;
     }
}