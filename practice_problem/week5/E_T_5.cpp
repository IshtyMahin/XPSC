#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()

ll isValid(ll mid)
{
   ll n = mid;
   ll s = 0;
   while (n > 0)
   {
      s += n % 10;
      n /= 10;
   }
   return mid - s;
}

int main()
{
   ll n, m;
   cin >> n >> m;

   ll l = 0, r = n;
   ll ans = 0;
   while (l <= r)
   {
      ll mid = l + (r - l) / 2;
      if (isValid(mid) >= m)
      {
         ans = mid;
         r = mid - 1;
      }
      else
      {
         l = mid + 1;
      }
   }
   
   
   cout << (ans==0?ans:(n-ans+1)) << endl;
}