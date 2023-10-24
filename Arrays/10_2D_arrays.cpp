#include <iostream>

using namespace std;

void print(int arr[][3], int size)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // creating two dimensional arrays
    // int arr[3][3];
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};                // out put is display as row wise
    int brr[3][3] = {{1, 11, 111}, {2, 22, 222}, {3, 33, 333}}; // output is display as col wise

    // taking row wise input
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // taking output as row wise
    print(arr,3);
    cout<<endl;
    print(brr,3);

    return 0;
}

