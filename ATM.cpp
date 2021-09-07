#include <bits/stdc++.h>
using namespace std;

int main()
{
    double y, bal;
    int withd;

    cin >> withd >> y;

    if (withd % 5 == 0 && (withd+0.50) <= y)
    {
        bal = y - (withd + 0.50);
        printf("%0.2f", bal);
    }
    else
    {
        bal = y;
        printf("%0.2f", bal);
    }
    return 0;
}