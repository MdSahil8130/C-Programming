
// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         int value = 1;

//         for (int j = 1; j <= n; j++)
//         {
//             if (i + j <= n)
//             {
//                 cout << " ";
//             }
//             else
//             {
//                 cout << value;
//                 value++;
//             }
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             if(i-j==0){
//                 cout<<" ";
//             }
//             else{
//                 cout<<i-j;
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }
#include <iostream>

using namespace std;

int main()
{
    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        int value = 1;
        for (int j = 1; j <= n; j++)
        {
            if (i + j >= 5)
            {
                cout << value;
                value++;
            }
            else
            {
                cout << " ";
            }
        }
        for (int j = 1; j <= i; j++)
        {
            if (i > j)
            {
                cout << i - j;
            }
        }
        cout << endl;
    }

    return 0;
}