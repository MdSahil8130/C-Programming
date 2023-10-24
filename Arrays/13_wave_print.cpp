// #include <iostream>

// using namespace std;

// int main()
// {
//     int row = 3, col = 3;
//     int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 3; col++)
//         {
//             cout << a[row][col] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;

//     for (int col = 0; col < 3; col++)
//     {
//         // for odd number of index
//         if (col & 1)
//         {
//             for (int row = 2; row >= 0; row--)
//             {
//                 cout << a[row][col];
//             }
//             cout << endl;
//             // for even number of index
//         }
//         else
//         {
//             for (int row = 0; row < 3; row++)
//             {
//                 cout << a[row][col];
//             }
//             cout << endl;
//         }
//     }

//     // wavw print for row

//     // for (int row = 0; row < 3; row++)
//     // {
//     //     if (row & 1)
//     //     {
//     //         for (col = 2; col >= 0; col--)
//     //         {
//     //             cout << a[row][col];
//     //         }
//     //         cout << endl;
//     //     }
//     //     else
//     //     {
//     //         for (col = 0; col < 3; col++)
//     //         {
//     //             cout << a[row][col];
//     //         }
//     //         cout << endl;
//     //     }
//     // }

//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{

    int row = 3, col = 3;

    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << a[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int col = 0; col < 3; col++)
    {
        if (col & 1)
        {
            for (row = 2; row >= 0; row--)
            {
                cout << a[row][col]<<" ";
            }
            cout << endl;
        }
        else
        {
            for (row = 0; row < 3; row++)
            {
                cout << a[row][col]<<" ";
            }
            cout << endl;
        }
    }

    // for (row = 0; row < 3; row++)
    // {
    //     if (row & 1)
    //     {
    //         for (col = 2; col >= 0; col--)
    //         {
    //             cout << a[row][col] << " ";
    //         }
    //         cout << endl;
    //     }
    //     else
    //     {
    //         for (col = 0; col < 3; col++)
    //         {
    //             cout << a[row][col] << " ";
    //         }
    //         cout << endl;
    //     }
    // }

    return 0;
}