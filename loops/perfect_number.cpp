// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter n ";
//     cin >> n;

//     int sum = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             sum += i;
//         }
//     }
//     if (2 * n == sum)
//     {
//         cout << "It is a perfect number ";
//     }
//     else
//     {
//         cout << "It is not a perfect number ";
//     }

//     return 0;
// }
#include <iostream>

using namespace std;

int main()
{
    int n, r, sum = 0, m;
    cin >> n;
    m = n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            // cout<<i<<endl;
            sum += i;
        }
    }
    cout << "sum of factor " << n << " is " << sum << endl;
    if (sum == 2 * n)
    {
        cout << "It is a perfect number " << endl;
    }
    else
    {
        cout << "It is not a  perfect number " << endl;
    }

    return 0;
}