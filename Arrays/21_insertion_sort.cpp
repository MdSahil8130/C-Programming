#include <iostream>

using namespace std;

int main()
{

    int arr[7] = {10, 1, 7, 4, 8, 2, 11};

    for (int i = 0; i < 7; i++)
    {
        int temp = arr[i];

        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            
            j--;
        }
        arr[j+1] = temp;
    }

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}