#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define pb push_back 
# define vi vector <int>
# define vl vector <ll>
#define nl  '\n'
#define yes cout<<"YES"<<nl
#define no  cout<<"NO"<<nl
#define    error  cout<<-1<<nl
# define srt(v) sort((v).begin() , (v).end())
# define rvr(v) reverse(srt(v))
# define all(v) (v).begin() , (v).end()
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)

double getDistance(int a1, int a2, int b1, int b2) {
    return sqrt((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2));
}

void solve (int t) {
   ll p1,p2,a1,a2,b1,b2;
   cin>>p1>>p2>>a1>>a2>>b1>>b2;
   double AP = getDistance(a1, a2, p1, p2);
   double A0 = getDistance(a1, a2, 0, 0);
   double BP = getDistance(b1, b2, p1, p2);
   double B0 = getDistance(b1, b2, 0, 0);
   double AB = getDistance(a1, a2, b1, b2);

   double l =0,r=1e9;
   double ans;
   while(r-l>1e-11){
    double mid = (l+r)/2;
    
    if(AP<=mid && A0<=mid){
        ans=mid;
        r=mid;
    }
    else if(BP<=mid && B0<=mid){
        ans = mid;
        r = mid;
    }
    else if(AP<=mid && B0<=mid && AB<=2*mid){
        ans = mid;
        r = mid;
    }
    else if(BP<=mid && A0<=mid && AB <=2*mid){
        ans = mid;
        r = mid;
    }
    else{
        l=mid;
    }
    
   }
   cout<<fixed<<setprecision(10)<<ans<<endl;

}

int main() {
   FAST ;
   int t = 1 ;
   cin >> t ;
   while (t--) {
   solve (t) ;
  }
  return 0 ;
}