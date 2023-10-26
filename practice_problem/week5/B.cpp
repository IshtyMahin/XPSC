#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define error cout << -1 << nl
#define srt(v) sort((v).begin(), (v).end())
#define rvr(v) reverse(srt(v))
#define all(v) (v).begin(), (v).end()
#define FAST                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)

void solve(int t)
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll q;
    cin >> q;
    while(q--){
        ll x;cin>>x;
        auto it = lower_bound(v.begin(),v.end(),x);
        auto it2 = upper_bound(all(v),x);

        if(it==v.begin()){
                cout<<"X ";
        }
        else{
            it--;
            cout<<*it<<" ";
        }
        
        if(it2==v.end()){
            cout<<"X"<<endl;
        }
        else{
            cout<<*it2<<endl;
        }
    }
}

int main()
{
    FAST;
    int t = 1;
    //    cin >> t ;
    while (t--)
    {
        solve(t);
    }
    return 0;
}