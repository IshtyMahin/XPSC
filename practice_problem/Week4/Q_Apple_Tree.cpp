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

vector<vector<int>> g;
vector<ll>leaf;

void dfs(int s,int p){
    if(g[s].size()==1 && g[s][0]==p)leaf[s]=1;
    else{
        for(auto c:g[s]){
            if(c!=p){
                dfs(c,s);
                leaf[s] += leaf[c];
            }
        }
    }
}

void solve(int t)
{
    
    ll n;
    cin >> n;
    g.assign(n+1,vector<int>());
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }


    leaf.assign(n+1,0);
    dfs(1,-1);
    int q;
    cin >> q;
    while (q--)
    {
        
        int x, y;
        cin >> x >> y;
        ll ans = leaf[x]*leaf[y];
        cout<<ans<<endl;
        
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