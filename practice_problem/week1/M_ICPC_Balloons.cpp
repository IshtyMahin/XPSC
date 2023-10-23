#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    set<char> ar;
    ar.insert(s.begin(), s.end());
    ll p = ar.size();
    cout << p * 2 + (n - p)<<endl;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    
}