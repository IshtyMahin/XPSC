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
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;

    for (ll i = 0; i < n; i++)
    {
        if (s1[i] == 'G')
        {
            s1[i] = 'B';
        }
        if (s2[i] == 'G')
        {
            s2[i] = 'B';
        }
    }

    if (s1 == s2)
    {
        yes;
    }
    else
    {
        no;
    }
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