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
#define coutv(v) for(auto it:v)cout<<it<<' ';cout<<nl;
#define cout(v) cout<<v<<nl;
#define cinv(v) for(auto &it:v)cin>>it;
#define cin(v) cin>>v;
#define rvr(v) reverse(srt(v))
#define all(v) (v).begin(), (v).end()
#define FAST                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)

void solve(int t)
{
    ll n,k,d;
    cin>>n>>k>>d;
    vl v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    map<ll,ll>m;
    for(int i=0;i<d;i++){
        m[v[i]]++;
    }
    ll mn=m.size();
  
    ll j=0;
    for(int i=d;i<n;i++){
       m[v[j]]--;

       if(m[v[j]]==0)m.erase(v[j]);
       
       j++;
       m[v[i]]++;
       ll sz = m.size();
       mn = min(sz,mn);
    }
    cout<<mn<<nl;
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