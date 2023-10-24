#include <iostream>

using namespace std;

int main()
{
    int n, r, rev = 0;
    cin >> n;
    int m=n;

    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }
    cout << rev << endl;

    if (m==rev)
    {
        cout << "It is a palindrome " << endl;
    }
    else
    {
        cout << "It is not a palindrome " << endl;
    }

    return 0;
}