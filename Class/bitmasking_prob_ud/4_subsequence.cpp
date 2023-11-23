#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()

void overLayNumber(char a[], int n)
{
    int j=0;
    while(n>0){
        if(n&1){
           cout<<a[j];
        }
        j++;
        n>>=1;
    }
    cout<<endl;
}

void generateAllSubsequences(char a[])
{
    int n = strlen(a);
    for (int i = 0; i < (1 << n); i++)
    {
        overLayNumber(a, i);
    }
}

int main()
{
    char ar[10000];
    cin>>ar;
    generateAllSubsequences(ar);
}