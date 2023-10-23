#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()
int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 1; i <= n - 1; i++)
    {
        cin >> v[i];
    }

    sort(all(v));
    for (int i = 1; i <= n; i++)
    {
        if (i != v[i])
        {
            cout << i << endl;
            break;
        }
    }
}