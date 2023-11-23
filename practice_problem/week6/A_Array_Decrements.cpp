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
#define FAST                          \
   ios_base ::sync_with_stdio(false); \
   cin.tie(0);                        \
   cout.tie(0)

void solve(int t)
{
   ll n;
   cin >> n;
   vector<ll> v(n);
   vector<ll> v1(n);
   for (ll i = 0; i < n; i++)
   {
      cin >> v[i];
   }
   for (ll i = 0; i < n; i++)
   {
      cin >> v1[i];
   }

   ll c = INT_MAX;
   for (ll i = 0; i < n; i++)
   {
      if (v1[i] != 0)
      {
         c = v[i] - v1[i];
         break;
      }
   }
   if(c<0){
      no;
      return;
   }


   for (int i = 0; i < n; i++)
   {
      if (v1[i] == 0)
      {
         if(v[i]-v1[i]>c){
            no;
            return;
         }
      }
      else{
         if(v[i]-v1[i]!=c){
            no;
            return;
         }
      }
   }
   yes;
   
}

int main()
{
   FAST;
   int t = 1;
   cin >> t;
   while (t--)
   {
      solve(t);
   }
   return 0;
}