#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, A, B, ca = 0, cb = 0;
        cin >> N >> A >> B;
        string s;
        cin >> s;
        for (int i = 0; i < N; i++)
        {
            if (s[i] == '0')
                ca++;
            else
                cb++;
        }
        int ans = 0;
        ans = ((ca * A) + (cb * B));
        cout << ans << endl;
    }
    return 0;
}