#include <iostream>

using namespace std;

int lastterm(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i <= n; i++)
    {
        int next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main()
{
    int n;
    cin >> n;

    cout << " Last term is " << lastterm(n) << endl;

    return 0;
}