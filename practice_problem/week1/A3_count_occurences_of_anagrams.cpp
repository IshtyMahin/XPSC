//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int search(string pat, string txt)
    {

        int l2 = pat.length();
        int l1 = txt.length();

        if (l1 < l2)
            return 0;

        unordered_map<char, int> pat_st, text_st;
        for (char c : pat)
            pat_st[c]++;

        int cnt = 0;
        int i = 0, j = 0;

        while (j < l1)
        {
            text_st[txt[j]]++;

            if (j - i + 1 == l2)
            {
                int f = 1;
                for (auto ch : pat_st)
                {

                    if (pat_st[ch.first] != text_st[ch.first])
                    {
                        f = 0;
                        break;
                    }
                }

                if (f)
                    cnt++;

                text_st[txt[i]]--;

                i++;
            }

            j++;
        }

        return cnt;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends