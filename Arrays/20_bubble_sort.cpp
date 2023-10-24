#include <iostream>

using namespace std;

int main()
{

    int arr[5] = {5, 4, 1, 3, 2};

    // bool swapped = false; // for best time complexity

    // for (int i = 1; i < 5; i++)
    // {
    //     // ist loop is for of no. of rounds that is 1 --> n-1
    //     for (int j = 0; j < 5 - i; j++)
    //     {
    //         // second loop is for comparing the adjacent elements
    //         if (arr[j] > arr[j + 1])
    //         {
    //             swap(arr[j], arr[j + 1]);
    //             swapped = true;
    //         }
    //     }
    //     if (swapped == false)
    //     {
    //         break;
    //     }
    // }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0 ; j < 5-1-i ; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}