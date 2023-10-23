//longest substring without repeating characters

#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     string s;
     cin>>s;
     unordered_map<char,int>mp;
     int tail=0,ans=0;
     for(int i=0;i<s.size();i++){
         mp[s[i]]++;

         while (mp[s[i]] > 1)
         {
             mp[s[tail]]--;
             tail++;
          }
          ans = max(ans, i - tail+1);
     }
     cout<<ans<<endl;

}