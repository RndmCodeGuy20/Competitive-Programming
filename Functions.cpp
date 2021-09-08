#include <bits/stdc++.h>
using namespace std;

int maxof(int a, int b, int c, int d)
{
    int max;

    if (a > b && a > c && a > d)
    {
        max = a;
    }
    else if (b > a && b > c && b > d)
    {
        max = b;
    }
    else if (c > a && c > b && c > d)
    {
        max = c;
    }
    else if (d > a && d > b && d > c)
    {
        max = d;
    }

    return max;
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << maxof(a, b, c, d);

    return 0;
}