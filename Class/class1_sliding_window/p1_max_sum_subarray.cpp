#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define forI(i,s,n) for(int i=s;i<n;i++)
#define all(v) (v).begin(), (v).end()
int main()
{

    int n,i;
    cin >> n;
    vector<int> v(n),pre(n+1,0);
    forI(i,0,n)
    {
        cin >> v[i];
        pre[i+1]=pre[i]+v[i];
    }
    int k;cin>>k;

    int j;
    int mx=INT_MIN;

    forI(i,0,n-k+1){
        int s=0;
        forI(j,i,i+k){
            s+=v[j];
        }
        mx = max(mx,s);
    }
    cout<<mx<<endl;

    int mx2 = INT_MIN;
    forI(i,0,n){
       cout<<pre[i]<<" ";
    }
    cout<<endl;
    forI(i,k,n){
        int s=pre[i]-pre[i-k-1];
        mx2= max(mx2,s);
    }
    cout<<mx2<<endl;

}