// #include <iostream>

// using namespace std;

// int main()
// {
//     int a, b, c;
//     cout << "Enter three numbers ";
//     cin >> a >> b >> c;

//     if (a > b)
//     {
//         if (a > c)
//         {
//             cout << "a is maximum " << endl;
//         }
//         else
//         {
//             cout << "c i maximum " << endl;
//         }
//     }
//     if (b > c)
//     {
//         if (b > a)
//         {
//             cout << " b is maximum ";
//         }
//         else
//         {
//             cout << "a is mximum ";
//         }
//     }
//     if (c > a)
//     {
//         if (c > b)
//         {
//             cout << "c is maximum";
//         }
//         else
//         {
//             cout << "b is maximum";
//         }
//     }

//     return 0;
// }

// alternative code for this
// #include <iostream>

// using namespace std;

// int main()
// {
//     int a, b, c;
//     cout << "Enter three numbers ";
//     cin >> a >> b >> c;

//     if (a > b && a > c)
//     {
//         cout << "a is maximum" << a;
//     }
//     else if (b > a && b > c)
//     {
//         cout << " b is maximum " << b;
//     }
//     else
//     {
//         cout << "c is maximum \n"
//              << c;
//     }

//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three numbers ";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << a << " is greater than both " << b << " and " << c;
    }
    else if (b > a && b > c)
    {
        cout << a << " is greater than both " << b << " and " << c;
    }
    else
    {
        cout << c << " is greater than both " << b << " and " << a;
    }

    return 0;
}