#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sp1, j1, sp2, j2;
    cin >> sp1; //starting point kangaroo1
    cin >> j1;  //jump velocity kangaroo1
    cin >> sp2; //starting point kangaroo2
    cin >> j2;  // jump velocity kangroo2

    while (true)
    {
        if (sp1 > sp2 && j1 > j2 || sp2 > sp1 && j2 > j1 || j1 == j2)
        {
            cout << "NO";
            break;
        }
        if ((sp1 = sp1 + j1) == (sp2 = sp2 + j2))
        {
            cout << "YES";
            break;
        }
    }
    return 0;
}