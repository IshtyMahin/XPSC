#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int x;
    cin >> x;
    auto it = lower_bound(v.begin(),v.end(),x);
    int ind = it-v.begin();

    cout << ind << " "<<*it<<endl;
}