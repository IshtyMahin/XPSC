#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < 4 - s.size(); i++)
    {
        cout << 0;
    }
    cout << s << endl;
}