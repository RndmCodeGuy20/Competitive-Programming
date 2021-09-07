#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a, b, sum;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        sum = a + b;
        cout << sum << endl;
    }

    return 0;
}