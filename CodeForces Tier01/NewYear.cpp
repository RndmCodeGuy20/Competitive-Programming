#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c, i, j, sum, rez;

    while (cin >> n >> j)
    {
        rez = 240 - j, sum = 0, c = 0;

        for (i = 0; i <= n; i++)
        {
            sum += 5 * i;

            if (sum > rez)
            {
                break;
            }

            c++;
        }

        cout << c << endl;
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n + 1];
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
        arr[i] = arr[i] * 5;
    }
    int count = 0;
    int check = k;
    for (int i = 1; i <= n; i++)
    {
        if (check <= 240)
        {
            check += arr[i];
            if (check > 240)
            {
                break;
            }
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}