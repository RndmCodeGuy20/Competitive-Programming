#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double pos = 0, neg = 0, zer = 0;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
        {
            pos++;
        }
        else if (arr[i] == 0)
        {
            zer++;
        }

        else
        {
            neg++;
        }
    }

    printf("%.6f\n%.6f\n%.6f", pos / n, neg / n, zer / n);

    return 0;
}