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
#define srt(v) sort((v).begin(), (v).end())
#define rvr(v) reverse(srt(v))
#define all(v) (v).begin(), (v).end()
#define FAST                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)


void solve()
{
    int x = 1;
    while (x)
    {
        int n, q;
        cin >> n >> q;
        if (n == 0 && q == 0)break;
        cout<<"CASE# "<<x<<":"<<endl;
        x++;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(all(v));
        while(q--){
            int p;
            cin>>p;
            int l=0,r=n-1;
            int ans=-1;
            while(l<=r){
                int mid = l+(r-l)/2;
                if(v[mid]==p){
                    ans=mid;
                    r=mid-1;
                }
                else if(v[mid]<p){
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
            cout<<p;
            if(ans==-1){
                 cout<<" not found"<<endl;
            }
            else{
                cout<<" found at "<<ans+1<<endl;
            }
        }
    }
}

int main()
{
    FAST;

    solve();

    return 0;
}