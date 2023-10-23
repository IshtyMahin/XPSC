#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define FAST                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)

void solve(int t)
{
    int n, k;
    cin >> n >> k;
    int x = 1;
    int p = 0, s = 0;
    for (int i = 1; i <= n; i++)
    {

        if (k - x < n - s - 1)
        {
            break;
        }

        cout << x << " ";
        p = x;
        s++;
        x += s;
    }

    for (int i = 1; i <= n - s; i++)
    {
        cout << x - s + i << " ";
    }
    cout << endl;
}

int main()
{
    FAST;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve(t);
    }
    return 0;
}