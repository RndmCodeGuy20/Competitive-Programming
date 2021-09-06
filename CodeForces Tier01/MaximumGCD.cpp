#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    // gcd(1,2) = gcd(2,3) = gcd(1,3) = 1
    // In the second test case, 2 is the maximum possible value, corresponding to gcd(2,4)
    cin >> n;
    while (n--)
    {
        cin >> i;
        cout << i / 2 << endl;
    }

    return 0;
}