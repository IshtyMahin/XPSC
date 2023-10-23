#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define error cout << -1 << nl
#define all(v) (v).begin(), (v).end()
#define FAST                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)

void solve(int t)
{
    string s;
    cin >> s;
    set<char> st;
    ll c = 0;

    for (int i = 0; i < s.size(); i++)
    {
        st.insert(s[i]);
        if (st.size() == 4)
        {
            c++;
            st.clear();
            st.insert(s[i]);
        }
    }

    if (st.size() <= 3)
        c++;
    cout << c << endl;
}

int main()
{
    FAST;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve(t);
    }
    return 0;
}