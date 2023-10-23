#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(int t)
{
    char a[9][9];

    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 2; i <= 7; i++)
    {
        for (int j = 2; j <= 7; j++)
        {
            if (a[i - 1][j - 1] == '#' && a[i + 1][j + 1] == '#' && a[i - 1][j + 1] == '#' && a[i + 1][j - 1] == '#')
            {
                cout << i << " " << j << endl;
                return;
            }
        }
    }
}

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve(t);
    }
    return 0;
}