#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int arr[5];
    long long int maxterm, minterm, maxsum, minsum, sum = 0;

    maxterm = 0;
    minterm = arr[0];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];

        if (arr[i] > maxterm)
        {
            maxterm = arr[i];
        }
        sum += arr[i];
        if (arr[i] < minterm)
        {
            minterm = arr[i];
        }
    }

    minsum = sum - minterm;
    maxsum = sum - maxterm;

    cout << maxsum << " " << minsum << endl;

    return 0;
}