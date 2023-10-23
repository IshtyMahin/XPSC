#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()
int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    ll x = ceil(a / c) * c;

    if (x > b)
        cout << -1 << endl;
    else
        cout << x << endl;
}