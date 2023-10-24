// // #include <iostream>

// // using namespace std;

// // int main()
// // {
// //     for (int i = 0; i < 4; i++)
// //     {
// //         for (int j = 0; j < 4; j++)
// //         {
// //             if (i + j >= 3)
// //             {
// //                 cout << "* ";
// //             }
// //             else
// //             {
// //                 cout << " ";
// //             }
// //         }
// //         cout<<endl;
// //     }

// //     return 0;
// // }

// #include<iostream>

// using namespace std;

// int main () {
//       for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if (i + j >= 4)
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout<<endl;
//     }

//     return 0;
// }
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i + j > 4)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}