#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 10;

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
        cin >> v[i];

    while (k--)
    {
        ll target;
        cin >> target;

        ll s = 0, e = n - 1, mid;
        bool flag = false;

        while (s <= e)
        {
            mid = s + (e - s) / 2;

            if (target < v[mid])
                e = mid - 1;
            else if (target > v[mid])
                s = mid + 1;
            else{
                flag = true; 
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    // int t;
    // cin >> t;
    // while(t--)
    // {
    solve();
    // }

    return 0;
}