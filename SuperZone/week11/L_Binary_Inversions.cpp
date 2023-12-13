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

void solve(int q)
{
    ll n;
    cin >> n;
    vl v(n);
    vl v1,v2;
 
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    v1=v2=v;
 
    ll x = -1, y = -1;
 
    for (ll i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            v1[i] = 1;
            break;
        }
    }
    for (ll i = n-1; i >= 0; i--)
    {
        if (v[i] == 1)
        {
            v2[i]=0;
            break;
        }
    }

    ll sum1=0,sum2=0,sum3=0,s=0,r=0,t=0;
 
    for(ll i=n-1; i>=0; i--){
        if(v[i]==0) s++;
        else sum1+=s;
        if(v1[i]==0) r++;
        else sum2+=r;
        if(v2[i]==0) t++;
        else sum3+=t;
    }

    cout << max({sum1,sum2,sum3}) << nl;
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