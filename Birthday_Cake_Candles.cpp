#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, max = 0, res = 0;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (max == arr[i])
        {
            res++;
        }
    }

    cout << res;

    return 0;
}