#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define nl '\n'
#define c(x) cout<<x<<nl
#define cin(v) for(int i=0;i<n;i++){cin>>v[i];}
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
    int n;
    cin >> n;
    vector<int>v(n);
    cin(v);
    n = unique(all(v))-v.begin();
    int ans=n;
    for(int i=0;i+2<n;i++){
       ans-=(v[i]<v[i+1] && v[i+1]<v[i+2]);
       ans-=(v[i]>v[i+1] && v[i+1]>v[i+2]);
    }
    c(ans);
    
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