//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars(string S);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;

        cout << longestSubstrDistinctChars(S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends

int longestSubstrDistinctChars(string s)
{
    // your code here
    unordered_map<char, int> mp;
    int tail = 0, ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;

        while (mp[s[i]] > 1)
        {
            mp[s[tail]]--;
            tail++;
        }
        ans = max(ans, i - tail + 1);
    }

    return ans;
}