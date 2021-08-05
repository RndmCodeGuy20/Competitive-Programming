/**
 * @file WeirdProblem.cpp
 * @author Shantanu Mane @RndmCodeGuy20 (shantanu.mane.200@outlook.com)
 * @brief This problem is connected to the famous Collatz conjecture which states that the
        above algorithm terminates for every value of n. However, nobody has been able to
        prove it.
 * @version  420.69
 * @date 2021-08-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while (true)//! Loop will break only when n will be 1.
    {
        if(n==1)break;
        if (n%2==0)
        {
            n/=2;
        }
        else
        {
            n = n*3 + 1;
        }
        cout << n <<" ";
    }
    
    return 0;
}