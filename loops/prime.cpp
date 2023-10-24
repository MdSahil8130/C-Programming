
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "it is not  a prime number " << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << "it is a prime number " << endl;
    }

    return 0;
}

//  alternative for finding whether the given number is prime or not

// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int count = 0;

//     for (int i = 2; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             count++;
//         }
//     }
//     if (count == 1)
//     {
//         cout << " prime number " << endl;
//     }
//     else
//     {
//         cout << "not a prime number " << endl;
//     }

//     return 0;
// }

