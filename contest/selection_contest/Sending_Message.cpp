#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
 
int main() {
   FAST ;
   
   string a;
   while(getline(cin,a)){
       stringstream ss(a);

       string p,q;
       ss>>p;
       ss>>q;
       int i=0;
       for(int j=0;j<p.size();j++){
        if(p[j]==q[i]){
           i++;
        }
        if(i==q.size())break;
       }

       if(i==q.size()){
        cout<<"Possible"<<endl;
       }
       else{
        cout << "Impossible"<<endl;
       }
   }
  
  return 0 ;
}