//first -ve interger in every window of size k

// max sum sub-array of size k

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
    int j = 0;
    queue<int>q;
    for (int i = 0; i < n-k+1; i++)
    {
        if(v[i]<0)q.push(v[i]);
        if (i - j + 1 == k)
        {
            if(q.size())cout<<q.front()<<endl;
            else cout<<0<<endl;
            if(v[j]<0)q.pop();
            j++;
        }
    }
}