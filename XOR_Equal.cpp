#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A;
    cin >> A;
    while (A--)
    {
        int N, X, P;
        cin >> N >> X;
        unordered_map<int, int> mp;
        unordered_map<int, int> present;
        for (int i = 0; i < N; i++)
        {
            cin >> P;
            mp[P]++;
            present[P] = 1;
        }
        if (N == 1)
        {
            cout << 1 << " " << 0 << endl;
            continue;
        }
        int Ans = 0;
        int changes = 0;
        for (auto it : mp)
        {
            if (it.second == N)
            {
                Ans = N;
                break;
            }
            if (it.second >= Ans)
            {
                Ans = it.second;
            }
        }
        if (X == 0)
        {
            cout << Ans << " " << changes << endl;
            continue;
        }
        for (auto it : mp)
        {
            if (present[(it.first) ^ X] == 1)
            {
                if (it.second + mp[(it.first) ^ X] > Ans)
                {
                    Ans = it.second + mp[(it.first) ^ X];
                    changes = min(it.second, mp[(it.first) ^ X]);
                }
                else if (it.second + mp[(it.first) ^ X] == Ans)
                {
                    if (min(it.second, mp[(it.first) ^ X]) < changes)
                    {
                        changes = min(it.second, mp[(it.first) ^ X]);
                    }
                }
            }
        }

        cout << Ans << " " << changes << endl;
    }
    return 0;
}