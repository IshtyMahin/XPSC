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
map<int, int> mp;
void solve(int t)
{
    map<int,int>tmp=mp;
    int h, m;
    char c;
    cin >> h >> c >> m;
    int n;
    cin >> n;
    ll h1 = n / 60;
    ll m1 = n % 60;

    int cnt = 0;
    ll f = 1440 / n;
    for (int i = 1; i <= 1440; i++)
    {

        m += m1;
        if (m >= 60)
        {
            m -= 60;
            h++;
        }
        
        h += h1;
        if (h >= 24)
        {
            h -= 24;
        }

        ll a = h * 100 + m;
        // cout<<a<<" "<<h<<" "<<m<<endl;
        if (tmp[a]){
            cnt++; tmp[a]--;}

        if(tmp.size()==0)break;
    }

    cout << cnt << endl;
}

int main()
{
    FAST;
    mp = {{0, 1}, {110, 1}, {220, 1}, {330, 1}, {440, 1}, {550, 1}, {660, 1}, {1001, 1}, {1111, 1}, {1221, 1}, {1331, 1}, {1441, 1}, {1551, 1}, {2112, 1}, {2222, 1}, {2332, 1}, {2002, 1}};
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve(t);
    }
    return 0;
}