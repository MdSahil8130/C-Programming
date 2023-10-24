// #include <iostream>

// bool isprime(int n)
// {
//     // 1 ->prime no
//     // 0 ->  not a prime no
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     if (isprime(n))
//     {
//         cout << " It is a prime number " << endl;
//     }
//     else
//     {
//         cout << "IT is not a prime number " << endl;
//     }

//     return 0;
// }
#include <iostream>

using namespace std;

bool isprime(int n)
{
    // 1-->  not a prime
    // 0-->  prime number
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        // else
        // {
        //     return 0;
        // }
        return 1;
    }
}

int main()
{
    int n;
    cin >> n;

    if (isprime(n))
    {
        cout << "prime" << endl;
    }
    else
    {
        cout << " not a prime " << endl;
    }
    return 0;
}