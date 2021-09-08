// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int N, L, R, Ans;
//         cin >> N >> L >> R;
//         if (R > N)
//         {
//             Ans = R;
//         }
//         if (L < N && N < R)
//         {
//             Ans = N;
//         }
//         else
//         {
//             int minval = INT_MAX;
//             for (int i = R; i >= L; i--)
//             {
//                 int Sum = 0;
//                 int ntemp = N;
//                 while (ntemp > 0)
//                 {
//                     Sum += ntemp % i;
//                     ntemp /= i;
//                     if (Sum > minval)
//                         break;
//                 }
//                 if (minval > Sum)
//                 {
//                     minval = Sum;
//                     Ans = i;
//                 }
//                 if (minval == 1)
//                     break;
//             }
//             cout << Ans << "\n";
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r, ans;
        cin >> n >> l >> r;
        if (r > n)
        {
            ans = r;
        }
        if (l < n && n < r)
        {
            ans = n;
        }
        else
        {
            int minval = INT_MAX;
            for (int i = r; i >= l; i--)
            {
                int sum = 0;
                int ntemp = n;
                while (ntemp > 0)
                {
                    sum += ntemp % i;
                    ntemp /= i;
                    if (sum > minval)
                        break;
                }
                if (minval > sum)
                {
                    minval = sum;
                    ans = i;
                }
                if (minval == 1)
                    break;
            }
            cout << ans << "\n";
        }
    }
    return 0;
}