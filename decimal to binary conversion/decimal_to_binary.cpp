#include <iostream>
#include <math.h>

using namespace std;

void dectobin(int n)
{
    for (int i = 3; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    // float ans = 0;
    // int i = 0;

    // while (n != 0)
    // {
    //     int bit = n & 1;
    //     ans = (bit * pow(10, i)) + ans;
    //     n = n >> 1;
    //     i++;
    // }
    // cout << ans;

    dectobin(n);

    return 0;
}