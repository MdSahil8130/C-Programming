#include <iostream>
#include <bits/stdc++.h>
#include <array>

using namespace std;

bool isSorted(vector<int> v, int i)
{
    if (i == v.size() - 1)
    {
        return true;
    }

    if (v[i] < v[i + 1])
    {
        return isSorted(v, ++i);
    }
    else
    {
        return false;
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    // int size = sizeof(arr) / sizeof(arr[0]);

    // int size = arr.length();

    vector<int> v = {1, 2, 3, 4, 5};

    if (isSorted(v, 0))
    {
        cout << "sorted arr " << endl;
    }
    else
    {
        cout << "Not sorted" << endl;
    }

    return 0;
}