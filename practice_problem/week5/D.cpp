#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()

bool isValid(vector<int> a, int n, int mid, int c)
{
    int cnt = 1;
    int last = 0;
    for (int i = 0; i < n; i++)
    {
        if (last + a[i] <= mid)
        {
            last += a[i];
        }
        else
        {
            cnt++;
            last = a[i];
        }
    }
    return cnt <= c;
}

int main()
{

    int n, c;
    while (cin >> n >> c)
    {
        vector<int> a(n);
        int s = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }

        int l = *max_element(all(a));
        int r = s;
        int ans;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (isValid(a, n, mid, c))
            {
                ans = mid;
                r = mid-1;
            }
            else
            {
                l = mid + 1;
            }
        }

        cout << ans << nl;
    }

    return 0;
}
