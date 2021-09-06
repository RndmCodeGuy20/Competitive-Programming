#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int m;
    cin >> m;
    while (m--)
    {
        int i;
        cin >> i;
        ll a[i];

        for (ll i = 0; i < i; i++)
            cin >> a[i];
        ll res = 0;

        for (ll i = 0; i < i - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                res += abs(a[i] - a[i + 1]);
            }
        }

        cout << res << "\n";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int m;
    cin >> m;
    while (m--)
    {
        int n;
        cin >> n;
        ll a[n];

        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll res = 0;

        for (ll i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                res += abs(a[i] - a[i + 1]);
            }
        }

        cout << res << "\n";
    }
    return 0;
}