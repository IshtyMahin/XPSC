#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a < b && c < d && a < c && b < d)
        {
            cout << "YES\n";
        }
        else if (a < b && c < d && a > c && b > d)
        {
            cout << "YES\n";
        }
        else if (a > b && c > d && a > c && b > d)
        {
            cout << "YES\n";
        }
        else if (a > b && c > d && a < c && b < d)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}