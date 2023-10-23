#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()
int main()
{
    int n, k;
    while (cin >> n)
    {
        cin >> k;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % k == 0)
            {
                c++;
            }
        }
        cout << c << endl;
    }
}