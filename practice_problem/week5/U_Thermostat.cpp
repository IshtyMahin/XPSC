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
 
void solve (int t) {
    ll l, r, x, a, b;
    cin >> l >> r >> x >> a >> b;
    if (a == b)
    {
        cout << 0 << nl;
        return;
    }
    if (a > b)
        swap(a, b);

    if (a + x > r && a - x < l)
    {
        cout<<-1<<endl;
        return;
    }
    if (b + x > r && b - x < l)
    {
        cout << -1 << endl;
        return;
    }

    if (abs(b - a) >= x)
    {
        cout << 1 << nl;
        return;
    }
    else if (r - b >= x || a - l >= x)
    {
        cout << 2 << nl;
    }
    else
        cout << 3 << nl;
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