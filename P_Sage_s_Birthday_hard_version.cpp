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
    int n;
    cin >> n;
    vector<int>v(n);
    set<int>s;
    for(int i=0;i<n;i++){
        cin>>v[i];
        s.insert(v[i]);
    }

    sort(all(v));
    vector<int>ans(n,0);
    ll j=0;

    for(int i=1;i<n;i+=2){
        ans[i]=v[j];
        j++;
    }
    
    for(int i=0;i<n;i++){
        if(ans[i]==0){
            ans[i]=v[j];
            j++;
        }
    }
    ll c=0;
    for(int i=1;i<n-1;i++){
        if(ans[i]<ans[i-1] && ans[i]<ans[i+1])c++;
    }
    cout<<c<<nl;
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<nl;
}

int main()
{
    FAST;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve(t);
    }
    return 0;
}