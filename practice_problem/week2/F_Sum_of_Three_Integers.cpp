#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()
int main()
{
    int n, p;
    cin >> n >> p;
    ll c=0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            for (int k = p - i - j < 0 ? 0 : p - i - j; k <= n; k++)
            {
                if(i+j+k>p)break;
               if(i+j+k==p)c++;

            }
        }
    }
    cout<<c<<endl;
}