#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int bigNum;
    int n, k, ans=0;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> bigNum;
        if (bigNum % k == 0)
        {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}