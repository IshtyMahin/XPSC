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
    int k;
    cin >> k;
    int tail = 0, ans = 0, cnt[26] = {};
    for (int head = 0; head < s.size(); head++)
    {
        cnt[s[head] - 'A']++;
        while (head - tail + 1 - *max_element(cnt, cnt + 26) > k)
        {
            cnt[s[tail] - 'A']--;
            tail++;
        }
        ans = max(ans,head-tail+1);
    }
}