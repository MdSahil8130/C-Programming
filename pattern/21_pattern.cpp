// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         int value =i;
//         for (int j = 1; j <= n; j++)
//         {
//             if (i<=j)
//             {
//                 cout << value;
//                 value++;
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }
//  2.pattern
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int value = 1;

    for (int i = 1; i <= n; i++)
    {
        
        for (int j = 1; j <= n; j++)
        {
            if (i +j>=n+1)
            {
                cout << value;
                value++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}