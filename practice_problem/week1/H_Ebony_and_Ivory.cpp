#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()
int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (c < a && c < b)
    {
        cout << "No" << endl;
        return 0;
    }
    if (c % a == 0 || c % b == 0)
    {
        cout << "Yes" << endl;
        return 0;
    }
    while (c > 0)
    {
        c -= a;
        if (c % b == 0 && c >= 0)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}