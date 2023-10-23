#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 1e5 + 10;
ll par[N];
ll sz[N];

multiset<ll> sizes;

void make(ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        par[i] = i;
        sz[i] = 1;
        sizes.insert(1);
    }
}

ll find(ll v)
{
    if (v == par[v])
        return v;
    return par[v] = find(par[v]);
}

void Union(ll a, ll b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        if (sz[a] < sz[b])
            swap(a, b);
        par[b] = a;
        sz[a] += sz[b];
    }
}

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, pair<ll, ll>>> edges;

    make(n);
    for (ll i = 0; i < m; i++)
    {
        ll u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back({wt, {u, v}});
    }

    sort(edges.begin(), edges.end());

    ll total_cost = 0;
    ll c = 0;
    for (auto &edge : edges)
    {
        ll wt = edge.first;
        auto [u, v] = edge.second;

        if (find(u) == find(v))
        {
            c++;
            continue;
        }
        Union(u, v);
        total_cost += wt;
    }

    ll k = m - c;
    if (n - 1 != m - c)
    {
        cout << "Not Possible" << endl;
    }
    else
    {
        cout << c << " " << total_cost << endl;
    }
}