#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    while (m != n)
    {
        if (m > n)
        {
            m = m - n;
        }
        else
        {
            n = n - m;
        }
    }
    cout << n;

    return 0;
}