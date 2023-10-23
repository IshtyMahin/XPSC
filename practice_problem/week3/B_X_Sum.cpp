#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define error cout << -1 << nl
#define all(v) (v).begin(), (v).end()
#define FAST                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)

void solve(int t)
{
    ll n, m;
    cin >> n >> m;
    ll a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    ll mx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ll sum = 0;
            int x = i, y = j;
    
            while (x >= 0 && x < n  && y >= 0 && y < m )
            {
                
                sum += a[x][y];
                x--;
                y--;
            }

            x = i, y = j;
            while (x >= 0 && x < n  && y >= 0 && y < m )
            {
                sum += a[x][y];
                x++;
                y++;
            }
    

            x = i, y = j;
            while (x >= 0 && x < n  && y >= 0 && y < m)
            {
                
                sum += a[x][y];
                x--;
                y++;
            }
            

            x = i, y = j;
            while (x >= 0 && x < n  && y >= 0 && y < m)
            {
            
                sum += a[x][y];
                x++;
                y--;
            }
            sum-=a[i][j]*3;
            mx = max(mx, sum);
    
        }
    }

    cout << mx << endl;
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