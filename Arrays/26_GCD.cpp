#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
        return a;

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    
}

int main()
{
    int a, b;
    cout << "Enter tow numbers " << endl;
    cin >> a >> b;

    int ans  = gcd(a,b);

    cout<<ans;

    return 0;
}