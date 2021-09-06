#include <iostream>
using namespace std;

int main()
{
    int ver, hor; // Initialising the variables ver= number of vertical sticks, hor = number of horizontal sticks.
    int i;        // Variable of chance.

    cin >> hor >> ver; // Reading the values of the grid

    if (ver > hor) // Condition : Since Akshat will always have the first chance, we will see what dimension will have the minimum value.
    {
        i = hor;
    }
    else
    {
        i = ver;
    }

    if (i % 2 == 0) //If chance is divisible by 2 or is even then Malvika will always win and vice versa.
    {
        cout << "Malvika";
    }
    else
    {
        cout << "Akshat";
    }

    return 0;
}