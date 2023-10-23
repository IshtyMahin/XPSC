#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()
int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
        cout << 0 << endl;
    else
    {
        cout << b - a + 1 << endl;
    }
}