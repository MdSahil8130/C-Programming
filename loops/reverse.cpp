#include <iostream>

using namespace std;

int main()
{
    int n, r, rev = 0;
    cin >> n;
    int m;
    m=n;


    while (n != 0)
    {
        r = n % 10;
        n = n / 10;

        rev = rev * 10 + r;
    }
    cout << "reverse of " << m << " is " << rev;

    return 0;
}
// alternative code  for reversing a number
// #include <iostream>

// using namespace std;

// int main()
// {
//     int n, r;
//     cin >> n;

//     while (n != 0)
//     {
//         r = n % 10;
//         n = n / 10;
//         cout << r;
//     }

//     return 0;
// }