#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e10;

void solve()
{
    int s, n;
    cin >> s >> n;

    map<int, int> mp;

    for (int i = 0; i < n; ++i)
    {
        int x,y;
        cin>>x>>y;
        mp[x]+=y;
    }

    // for (int i = 0; i < x.size(); ++i)
    // {
    //     if(i>0 && x[i-1]==x[i])continue;
    //     if (s > x[i])
    //         s += mp[x[i]];
    //     else
    //     {
    //         // cout << i+1 << endl;
    //         cout << "NO" << endl;
    //         return;
    //     }
    // }

    for(auto [a,b]:mp){
        // if(s>a)s+=b;
        // else{
        //     cout<<"NO"<<endl;
        //     return ;
        // }
        cout<<a<<" "<<b<<endl;
    }
    cout << "YES" << endl;
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    // int t;
    // cin >> t;
    // while(t--)
    // {
    solve();
    // }

    return 0;
}