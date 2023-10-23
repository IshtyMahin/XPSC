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

    vector<int> v(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        v[s[i] - 'a'] = 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (v[i] == 0)
        {
            char a = 'a' + i;
            cout << a << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}