#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define pb push_back 
# define vi vector <int>
# define vl vector <ll>
#define nl  '\n'
#define yes cout<<"YES"<<nl
#define no  cout<<"NO"<<nl
#define    error  cout<<-1<<nl
# define all(v) (v).begin() , (v).end()
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
 
void solve (int t) {
     ll n;
     cin>>n;
     map<string,int>mp;
     vector<string>s(n);
     for(int i=0;i<n;i++){
        cin>>s[i];
        mp[s[i]]++;
     }

     for(int i=0;i<n;i++){
        int f=0;
        for(int j=1;j<s[i].length();j++){
            string a = s[i].substr(0,j);
            string b = s[i].substr(j,s[i].length()-j);

            if(mp[a] && mp[b])f=1;
        }
        cout<<f;
     }
     cout<<endl;
}

int main() {
   FAST ;
   int t = 1 ;
   cin >> t ;
   while (t--) {
   solve (t) ;
  }
  return 0 ;
}