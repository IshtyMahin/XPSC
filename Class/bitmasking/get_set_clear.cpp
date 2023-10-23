#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()

int getIthBit(int &n, int i)
{
    int mask = (1 << i);
    return (n & mask) > 0 ? 1 : 0;
}

void clearIthBit(int &n,int i){
     int mask = ~(1<<i);
     n= (n & mask);
}

void setIthBit(int &n,int i){
    int mask (1<<i);
    n= n|mask;
}

void updateIthBit(int &n,int i,int v){
    clearIthBit(n,i);
    int mask = (v<<i);
    n = n|mask; //sets the right value;
}

void clearLastBits(int &n,int i){
     int mask = (-1<<i);
     n = n&mask;
}
void clearBitsInRange(int &n,int i,int j){
    int a=(-1)<<(j+1);
    int b = (1<<i)-1;
    int mask = a|b;
    n = n&mask;
}
int main()
{
    int n=13;//(1101)
    int n1=31;
    int i;cin>>i;

    // cout<<getIthBit(n,i)<<endl;
    // clearIthBit(n,i);
    //setIthBit(n,i);
    // updateIthBit(n,i,0);
    // clearLastBits(n,i);
    clearBitsInRange(n1,1,3);
    cout<<n1<<endl;
}