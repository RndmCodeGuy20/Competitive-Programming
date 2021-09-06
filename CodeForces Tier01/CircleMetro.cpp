#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main()
{

    //Input : The first line contains five space-separated integers n, a, x, b, y (4≤n≤100, 1≤a,x,b,y≤n, all numbers among a, x, b, y are distinct) — the number of stations in Roflanpolis, Daniel's start station, Daniel's finish station, Vlad's start station and Vlad's finish station, respectively.

    // Output : Output "YES" if there is a time moment when Vlad and Daniel are at the same station, and "NO" otherwise. You can print each letter in any case (upper or lower).

    // Daniel = 1 -> 2 -> 3 -> ...-> N -> N-1...
    // Vlad = N -> N-1 -> N-2 -> 1 -> N

    ull n, a, b, c, d;
    ull i, j;

    cin >> n >> a >> b >> c >> d;

    if (b >= a)
    {
        i = b - a;
    }
    else
    {
        i = (n - 1) + b;
    }

    if (d <= c)
    {
        j = c - d;
    }
    else
    {
        j = (c - 1) + (n - d) + 1;
    }

    ull k = min(i, j);

    bool flag = false;

    for (ull x = 0; x < k; x++)
    {
        if (a == b || c == d)
        {
            flag = true;
            break;
        }
        a++;
        if (a == n + 1)
        {
            a = 1;
        }
        c--;
        if (c == 0)
        {
            c = n;
        }
        if (a == c)
        {
            flag = true;
            break;
        }
    }

    if (flag == false)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}