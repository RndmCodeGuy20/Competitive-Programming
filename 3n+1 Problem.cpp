/**
 * @file The 3n+1 Problem.cpp
 * @author Shantanu Mane (@RndmCodeGuy20) (shantanu.mane.200@outlook.com)
 * @brief For each pair of input integers i and j, output i, j in the same order in which they appeared in the input and then the maximum cycle length for integers between and
including i and j. These three numbers should be separated by one space, with all three numbers on one line and with one line of output for each line of input. 
 * @version  420.69
 * @date 2021-08-21
 * 
 * @copyright Copyright (c) 2021
 * * CODE RUNNING FOR ALL TEST CASES!!! ALL BY MYSELF!!!
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    cin >> i >> j;

    int num, count = 0, n, max = 0;

    for (num = i; num <= j; num++)
    {
        count = 0;
        n = num;
        while (true)
        {
            ++count;
            if (n == 1)
                break;
            if (n % 2 == 0)
            {
                n /= 2;
            }
            else
            {
                n = n * 3 + 1;
            }
        }
        if (count > max)
        {
            max = count;
        }
    }

    cout << i << " " << j << " " << max;

    return 0;
}