// function to set bits in a number

#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define srt(v) sort((v).begin() , (v).end())
# define rvr(v) reverse(srt(v))
ll c=0;
// log n
int countbits(int n){
    ll cnt = 0;
    while (n > 0)
    {
        cnt += n & 1;
        n = n >> 1;
        c++;
    }

    return cnt;
}

int count_bits_hack(int n){
    int ans=0;
    while(n>0){
        n=n&(n-1);
        ans++;
        c++;
    }

    return ans;
}
int main(){
     int n;
     cin>>n;

     cout<<countbits(n)<<endl;
     cout<<c<<endl;
     c=0;
     cout<<count_bits_hack(n)<<endl;
     cout<<c<<endl;
     
}