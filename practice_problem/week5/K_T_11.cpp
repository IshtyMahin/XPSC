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
 bool isPossible(ll mid, vector<ll> v, ll m)
{
    ll s = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (mid > v[i])
            s += mid-v[i];
    }
    // cout<<s<<endl;
    return s <= m;
}
void solve (int t) {
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll l = 1, r = INT_MAX;

    ll ans;
    while (l <= r)
    {
        // cout<<l<<" "<<r<<endl;
        ll mid = (l + r) / 2;
        // cout<<mid<<endl;
        if (isPossible(mid, v, m))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r= mid - 1;
        }
    }
    cout << ans << endl;
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