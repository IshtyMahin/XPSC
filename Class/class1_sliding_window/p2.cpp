#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k;
    cin >> k;
    queue<int>q;
    int i = 0, j = 0, s = 0;
    while (j < n)
    {
        if(v[j]<0)q.push(v[j]);
        if (j >= k - 1)
        {
            if(q.size()){
                cout<<q.front()<<" ";
            } 
            else cout<<0<<" ";
              
            if(v[i]<0)q.pop();
            i++;
        }
        j++;
    }
}