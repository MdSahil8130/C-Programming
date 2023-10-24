#include <iostream>

using namespace std;

bool ispresent(int arr[][3], int target, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
    // return 0;
}

int main()
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Enter the element to search for ";
    int target;
    cin >> target;

    bool found = ispresent(arr, 3, 3, target);

    if (found)
    {
        cout << "Key is present ";
    }
    else
    {
        cout << "Key is absent ";
    }

    return 0;
}