// #include <iostream>

// using namespace std;

// int sumdigits(int n, int sum)
// {
//     // if (n == 0)
//     // {
//     //     return 0;
//     // }

//     // int digit = n % 10;
//     // // n = n / 10;

//     // return digit + sumdigits(n/10);

//     if (n == 0)
//     {
//         cout << sum << endl;
//         return 0;
//     }

//     int digit = n % 10;
//     n = n / 10;
//     sum = sum + digit;

//     sumdigits(n, sum);
// }

// int main()
// {

//     int n;
//     cin >> n;
//     int s = 0;
//     sumdigits(n, s);

//     return 0;
// }

#include <iostream>

using namespace std;

int prod(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int digit = n % 10;
    n = n / 10;
    return digit * prod(n);
}

int main()
{
    int n;
    cin >> n;
    cout<<prod(n)<<endl;

    return 0;
}