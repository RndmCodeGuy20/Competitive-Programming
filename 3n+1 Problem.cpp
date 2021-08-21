#include <iostream>
using namespace std;

int main()
{
    int n, m, max = 0, count = 0, i, num;
    cin >> n >> m;
    i = n;
    num = n;
    for (num = 0; num < m; num++)
    {
        while (true) //! Loop will break only when i will be 1.
        {
            ++count;
            if (i == 1)
                break;
            if (i % 2 == 0)
            {
                i /= 2;
            }
            else
            {
                i = i * 3 + 1;
            }

            
        }
        if (count > max)
        {
            max = count;
        }
    }
    cout << n << m << max;

    return 0;
}