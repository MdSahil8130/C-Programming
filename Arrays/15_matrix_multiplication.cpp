#include <iostream>

using namespace std;

int main()
{

    int a[3][2], b[2][2], res[3][2]={0};
    int row, col, i, j;
    // cout << "Enter the size of matrix ";
    // cin >> row >> col;

    cout << endl
         << "Enter the elemnets of first matrix ";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl
         << "Enter the elements of second matrix";

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> b[i][j];
        }
    }

    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++) // iteration upto rows of first matrix
    {
        for (int j = 0; j < 2; j++) // iteration upto columns of second matrix
        {
            for (int k = 0; k < 2; k++) 
            {
                res[i][j]= res[i][j]+ a[i][k]*b[k][j];
            }
        }
    }

    cout<<endl<<"matrix multiplication "<<endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << res[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}