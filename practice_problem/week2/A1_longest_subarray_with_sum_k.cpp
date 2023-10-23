#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()

int longestSubarrayWithSumK(vector<int> v, long long k)
{
    // Write your code here
    int n = v.size();
    long long tail = 0, s = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        s += v[i];
        while (tail < i and s > k)
        {
            s -= v[tail];
            tail++;
        }

        if (s == k)
        {
            ans = max(ans, (i - tail + 1));
        }
    }
    return ans;
}

int main(){
          int n;
          cin>>n;
          vector<int>v(n);
          for(ll i=0;i<n;i++){
             cin>>v[i];
          }
          ll k;
          cin>>k;
          cout<<longestSubarrayWithSumK(v,k);

}