// longest substring without repeating characters

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
    int k;cin>>k;
    unordered_map<char, int> mp;
    int tail = 0, ans = -1;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;

        while (mp.size() > k)
        {
            mp[s[tail]]--;
            if (mp[s[tail]] == 0)
            {
                mp.erase(s[tail]);
            }
            tail++;
        }
        if(mp.size()==k)
        ans = max(ans, i - tail + 1);
    }
    cout << ans << endl;
}