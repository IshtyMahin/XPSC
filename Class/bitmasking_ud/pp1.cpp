/* 
  You are given two 32-bit integer numbers, N and M ,and two bit position i and j . Write a method to set all bits between i and j in N equal to M . M (becomes a  substring of N locationed at i and starting at j

  Example:
  N =10000000000
  M = 10101
  i=2,j=6
  Output:
  1001010100
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()

void clearBitsInRange(int &n, int i, int j)
{
    int a = (-1) << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    n = n & mask;
}
void replaceBits(int &n , int i,int j ,int m){
     clearBitsInRange(n,i,j);
     int mask = (m<<i);
     n=n|mask;
}

int main(){
     int n=15;
     int i=1;
     int j=3;
     int m =2;
     replaceBits(n,i,j,m);
     cout<<n<<endl;
}