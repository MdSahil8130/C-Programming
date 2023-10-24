// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter n ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << i << endl;
//         }
//     }

//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i;
    int sum = 0;

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            sum+=i;
        }
        // sum+=i;
    }

    cout << "sum of " << n << " is " << sum;

    return 0;
}