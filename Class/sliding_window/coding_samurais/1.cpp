#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll k;
    cin >> k;
    ll tail = 0, s = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        s += v[i];
        while(tail<i and s>k){
           s-=v[tail];
           tail++;
        }

        if(s==k){
          ans=max(ans,(i-tail+1));
        }

    }
    cout<<ans<<endl;
}