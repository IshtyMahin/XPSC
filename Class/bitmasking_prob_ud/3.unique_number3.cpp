// Unique number , given 3N + 1 numbers where every number comes thrice expect one number .Find out that  unique number.

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()

void updateSum(vector<int>&sumArr,int x){
    // Extract all bits of x
    for(int i=0;i<32;i++){
        int ith_bit=x&(1<<i);
        if(ith_bit){
            sumArr[i]++;
        }
    }
}
int numFromBits(vector<int>sumArr){
    int num = 0;
    for(int i=0;i<32;i++){
        num +=(sumArr[i]*(1<<i));
    }

    return num;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);


    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int>sumArr(32,0);

    for(int x:v){
        updateSum(sumArr,x);
    }

    for(int i=0;i<32;i++){
        sumArr[i]=sumArr[i]%3;
    }

    cout<<numFromBits(sumArr);

}

// find way so that cancel out bits of repeating numbers
