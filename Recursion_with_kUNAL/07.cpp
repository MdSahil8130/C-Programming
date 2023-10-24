#include <iostream>

using namespace std;

int count(int n, int cnt)
{
    if (n == 0)
    {
        return cnt;
    }

    // int digit = n % 10;
    // n = n / 10;
    // if (digit == 0)
    // {
    //     cnt++;
    // }

    // count(n, cnt);


    if (n % 10 == 0)
    {
        count(n/10, ++cnt);
    }
    else
    {
        count(n/10 , cnt);
    }
}

int main()
{

    int n;
    cin >> n;
    int cnt = 0;

    cout << count(n, cnt) << endl;

    return 0;
}