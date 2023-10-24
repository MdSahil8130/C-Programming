#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        char start = 'A' + n - i;
        // int value = n + 1 - i;
        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start++;
        }
        cout << endl;
    }

    return 0;
}
