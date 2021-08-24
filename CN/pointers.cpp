#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    int* t = &i;

    cout << i << endl;
    cout << t << endl;

    int *p;

    cout << p << endl;
    cout << *p << endl;

    return 0;
}