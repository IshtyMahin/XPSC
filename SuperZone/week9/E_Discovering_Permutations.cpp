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
# define srt(v) sort((v).begin() , (v).end())
# define rvr(v) reverse(srt(v))
# define all(v) (v).begin() , (v).end()
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
string s= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void display(string a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i];
    cout << endl;
}

void solve (int t) {
    ll n,m;
    cin>>n>>m;
    string p;
    p=s.substr(0,n);
    ll i=0;
    do
    {
        i++;
        if(i>m){
            break;
        }
        display(p, n);
    } while (next_permutation(p.begin(), p.end()));
}

int main() {
   FAST ;
   int t = 1 ;
   cin >> t ;
   for (int i=1;i<=t;i++) {
    cout<<"Case"<<" "<<i<<":"<<endl;
   solve (i) ;
  }
  return 0 ;
}