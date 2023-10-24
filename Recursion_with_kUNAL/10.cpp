#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// int linearSearch(int *arr, int target, int i, int size)
// {
//     // if (i == size - 1)
//     // {
//     //     if (target == arr[i])
//     //     {
//     //         return i;
//     //     }
//     //     else
//     //     {
//     //         return -1;
//     //     }
//     // }
//     if (i == size)
//     {
//         return -1;
//     }

//     if (target == arr[i])
//     {
//         return i;
//     }
//     else
//     {
//         return linearSearch(arr, target, i + 1, size);
//     }
// }

vector<int> v2;

std::vector<int> linearSearch(vector<int> v, int target, int i)
{
    if (i == v.size())
    {
        return v2;
    }

    if (v[i] == target)
    {
        v2.push_back(i);
    }

    return linearSearch(v, target, ++i);
}

int main()
{
    // int arr[6] = {3, 5, 2, 3, 8, 9};
    // int size = sizeof(arr) / sizeof(arr[0]);

    // cout << linearSearch(arr, 3, 0, size) << endl;

    vector<int> v = {3, 4, 1, 3, 7, 8};

    linearSearch(v, 3, 0);
    cout << v2.size() << endl;
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }

    return 0;
}