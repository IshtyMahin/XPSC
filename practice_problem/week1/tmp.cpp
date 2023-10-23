#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e6 + 10;

struct STNode
{
    int max_val;
    int min_val;

    STNode()
    {
        max_val = INT_MIN;
        min_val = INT_MAX;
    }
};

vector<ll> v;
int a[N];

struct ST
{
    STNode t[4 * N];

    void clear()
    {
        memset(t, 0, sizeof t);
    }

    void build(int n, int b, int e)
    {
        if (b == e)
        {
            t[n].max_val = a[b];
            t[n].min_val = a[b];
            return;
        }

        int mid = (b + e) >> 1;
        int l = n << 1, r = l | 1;
        build(l, b, mid);
        build(r, mid + 1, e);

        t[n].max_val = max(t[l].max_val, t[r].max_val);
        t[n].min_val = min(t[l].min_val, t[r].min_val);
    }

    STNode query(int n, int b, int e, int i, int j)
    {
        if (b > j || e < i)
        {
            STNode null_node;
            return null_node;
        }

        if (b >= i && e <= j)
        {
            return t[n];
        }

        int mid = (b + e) >> 1;
        int l = n << 1, r = l | 1;

        STNode left_child = query(l, b, mid, i, j);
        STNode right_child = query(r, mid + 1, e, i, j);

        STNode current_node;
        current_node.max_val = max(left_child.max_val, right_child.max_val);
        current_node.min_val = min(left_child.min_val, right_child.min_val);

        return current_node;
    }

    void update(int n, int b, int e, int idx, int val)
    {
        if (b > idx || e < idx)
            return;

        if (b == e)
        {
            t[n].max_val = val;
            t[n].min_val = val;
            return;
        }

        int mid = (b + e) >> 1;
        int l = n << 1, r = l | 1;
        update(l, b, mid, idx, val);
        update(r, mid + 1, e, idx, val);

        t[n].max_val = max(t[l].max_val, t[r].max_val);
        t[n].min_val = min(t[l].min_val, t[r].min_val);
    }
};

ST t;
ll n;

void solve()
{
    cin >> n;
    t.clear();

    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    t.build(1, 1, n);

    ll q;
    cin >> q;
    while (q--)
    {
        int op;
        cin >> op;

        if (op == 1)
        {
            ll l, r;
            cin >> l >> r;

            STNode result = t.query(1, 1, n, l, r);
            if(result.max_val==result.min_val){
                cout<<"draw"<<endl;
            }
            else{
                cout<<"wins"<<endl;
            }
        }
        else
        {
            ll idx, val;
            cin >> idx >> val;
            t.update(1, 1, n, idx, val);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    // int t;
    // cin >> t;
    // while (t--)
    // {
        solve();
    // }

    return 0;
}
