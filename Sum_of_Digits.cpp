#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, T, sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> T;

        sum = 0;
        
        while (T != 0)
        {
            sum = sum + (T % 10);
            T = T / 10;
        }

        cout << sum << endl;
    }

    return 0;
}