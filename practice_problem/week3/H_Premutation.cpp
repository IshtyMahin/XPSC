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
    ll n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            cin >> a[i][j];
        }
    }
    ll p=a[0][0],q=0;
    for (int i = 0; i < n-1; i++)
    {

        ll first =p;
        ll second=0;
        ll c=q;
        ll c1=0;
        for (int j = 0; j < n; j++)
        {
            if(a[j][i]==first)c++;
            else{
                second=a[j][i];
                c1++;
            }
        }

        if(c1>c){
            cout<<second<<" ";
            p = first;
            q=c;
        }
        else{
            cout<<first<<" ";
            p = second;
            q = c1;
        }
    }
    cout<<p<<endl;

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