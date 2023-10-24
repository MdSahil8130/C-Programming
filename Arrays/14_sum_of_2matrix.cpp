#include <iostream>

using namespace std;

int main()
{
    int a[5][5], b[5][5], res[5][5];
    int row, col, i, j;

    cout << "Enter the size of matrix " << endl;
    cin >> row >> col;

    cout << endl
         << "Enter the elements of first matrix ";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // cin >> a[i][j];
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl
         << "Enter the elements of second matrix ";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> b[i][j];
            // cout<<b[i][j]<<" ";
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // cin >> a[i][j];
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    cout << "sum of matrices is " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            res[i][j] = a[i][j] + b[i][j];
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}