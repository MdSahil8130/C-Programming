#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            char start = 'A' + i - 1;
            cout << start;
        }
        cout << endl;
    }

    return 0;
}

// another similar pattern for alphabet

// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     char ch='A';

//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= i; j++)
//         {
//             cout<<ch<<" ";
//             ch++;

//         }
//         cout << endl;
//     }

//     return 0;
// }