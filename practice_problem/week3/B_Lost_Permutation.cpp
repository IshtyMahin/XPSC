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
#define all(v) (v).begin(), (v).end()
#define FAST                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)

void solve(int t)
{
    ll n, k;
    cin >> n >> k;
    map<int, int> m;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    

    ll x=1;
    while(k>0){
        if(!m[x]){
            k-=x;
            if(k>=0){
                v.push_back(x);
            }
        }
        x++;
    }
    sort(all(v));
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    if(k!=0){
        no;
    }
    else{
        for(int i=0;i<v.size()-1;i++){
            if(v[i]+1==v[i+1])continue;
            no;
            return ;
        }
        yes;
    }
}

int main()
{
    FAST;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve(t);
    }
    return 0;
}