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
    ll k = *max_element(all(v));
ll ans =0,mx=0;
    for(int i=2;i<=k;i++){
        int c=0;
        for(auto j:v){
            if(j%i==0)c++;
        }
       if(c>mx){
        mx=c;
        ans=i;
       }
       
    }

    cout<<ans<<endl;
}