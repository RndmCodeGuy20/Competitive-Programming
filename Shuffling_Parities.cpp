#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> V;
        for (int i = 0; i < N; i++)
        {
            int temp;
            cin >> temp;
            V.push_back(temp);
        }
        int Odd = 0, Even = 0;
        for (int i = 0; i < N; i++)
        {
            if ((i + 1 + V[i]) % 2 == 0)
            {
                if (V[i] % 2 == 0)
                    Even++;
                else
                    Odd++;
            }
        }
        int Ans = 0;
        Ans = abs(Even - Odd);
        Ans = N - Ans;
        cout << Ans << endl;
    }
    return 0;
}