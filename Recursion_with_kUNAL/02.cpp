#include <iostream>

using namespace std;

int search(int *arr, int key, int s, int e)
{
    if (s > e)
    {
        return -1;
    }

    int mid = s + (e - s) / 2;

    if (key == arr[mid])
    {
        return mid;
    }

    if (key < arr[mid])
    {
        return search(arr, key, s, mid - 1);
    }

    return search(arr, key, mid + 1, e);
}

int main()
{

    int arr[6] = {3, 5, 6, 8, 3, 7};
    int s = 0;
    // int e = arr.size() - 1;
    int size = sizeof(arr)/sizeof(arr[0]);
    int e = size - 1;
    cout << search(arr, 7, s, e) << endl;

    return 0;
}