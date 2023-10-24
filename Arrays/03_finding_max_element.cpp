// #include <iostream>

// using namespace std;

// int main()
// {
//     int a[] = {1, 2, 5, 7, 4, 8};
//     int max = a[0];
//     for (int i = 1; i < 7; i++)
//     {
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//     }
//     cout << max << endl;

//     return 0;
// }
#include <iostream>

using namespace std;

int main()
{
    int size;
    cin >> size;

    int a[size];

    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int max = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "max is " << max;

    return 0;
}