#include <bits/stdc++.h>
using namespace std;

int main()
{
    int integer;
    long long long1;      
    char character;
    float floatnumber;
    double doublenumber;

    cin >> integer;
    cin >> long1;
    cin >> character;
    cin >> floatnumber;
    cin >> doublenumber;

    cout << integer << endl;
    cout << long1 << endl;
    cout << character << endl;
    printf("%.3f \n", floatnumber);
    printf("%.9lf", doublenumber);
    return 0;
}