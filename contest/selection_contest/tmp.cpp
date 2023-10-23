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

void subsetSum(vector<ll> v, ll i, vector<ll> &cur, ll s, vector<ll> &sum,int t)
{
    if (i == v.size())
    {
        if (cur.size() == v.size() / 2)
            sum.push_back(s);
        return;
    }

    subsetSum(v, i + 1, cur, s, sum,t);

    cur.push_back(v[i]);
    s += v[i];
    subsetSum(v, i + 1, cur, s, sum,t);

    cur.pop_back();
}

void solve(int t)
{
    int n;
    cin >> n;
    vector<ll> v(n);
    ll tSum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        tSum += v[i];
    }
    vector<ll> sum;
    vector<ll> cur;
    if (v.size() == 1){
        cout<<v[0]<<endl;
        return;
    }
    if(v.size()==2){
        cout<<abs(v[0]-v[1])<<endl;
        return;
    }
        

    subsetSum(v, 0, cur, 0, sum,tSum/2);
    int k = sum.size();
    ll mn = LLONG_MAX;
    
    for (ll i = 0; i < k; i++)
    {
        ll a = sum[i];
        ll b = tSum - a;
        mn = min(mn, abs(a - b));
    }
    cout << mn << endl;
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