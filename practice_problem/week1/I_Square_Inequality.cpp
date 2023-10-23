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

    if (a * a + b * b < c * c)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
}