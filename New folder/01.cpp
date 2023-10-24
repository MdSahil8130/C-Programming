#include <iostream>

using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int indinsertion(int arr[], int size, int ele, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = ele;
    return 1;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5, ele = 100, index = 2;
    print(arr, size);
    indinsertion(arr, size, ele, 10, index);
    size++;
    cout << "array after insertion " << endl;
    print(arr, size);

    return 0;
}