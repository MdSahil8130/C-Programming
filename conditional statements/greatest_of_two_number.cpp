#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Enter two numbers ";
    cin >> x >> y;

    if (x > y)
    {
        cout << "x is greater " << x;
    }
    else
    {
        cout << "y is greater " << y;
    }

    return 0;
}