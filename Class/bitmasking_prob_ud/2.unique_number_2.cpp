// Unique number , given 2N + 2 numbers where every number comes twice expect two number .Find out those two unique numbers.

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
    vector<int> v(n);
    ll x = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        x ^= v[i];
    }

    // pos
    int pos = 0;
    int tmp = x;
    while((tmp&1)==0){
        pos++;
        tmp=tmp>>1;
    }

    int setA=0;
    int setB =0;
    int mask = (1<<pos);
    for(int i=0;i<n;i++){
         if(v[i]&mask)setA^=v[i];
         else setB^=v[i];
    }
    cout<<setA<<" "<<setB<<endl;
    
}

// i) Xor of two unique >0 (Atleat 1 set Bit)
// ii) A bit is set when it is present in exactly one of the two numbers

// pos of any set bit (First set bit from right)