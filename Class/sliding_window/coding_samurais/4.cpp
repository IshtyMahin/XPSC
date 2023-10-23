// get equal substring within budget

// https://leetcode.com/problems/get-equal-substrings-within-budget/description/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()
int main()
{
    string s, s1;
    cin >> s >> s1;
    ll k;
    cin >> k;
    ll tail = 0, sm = 0, ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sm += abs(s[i] - s1[i]);
        while (sm > k)
        {
            sm -= abs(s[tail] - s1[tail]);
            tail++;
        }

        ans = max(ans, (i - tail + 1));
    }

    cout << ans << endl;
}